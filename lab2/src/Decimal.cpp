#include "../include/Decimal.hpp"

Decimal::Decimal() {
    _array = new unsigned char[1]{'0'};
    _size = 1;
}

Decimal::Decimal(const std::initializer_list<unsigned char> &t) {
    size_t leadingZeros = 0;
    bool countZeros = true;
    for (auto c : t) {
        if (!std::isdigit(c)) throw std::invalid_argument("chars should be a digits");
        if (countZeros && c == '0') {
            leadingZeros++;
        } else {
            countZeros = false;
        }
    }
    _size = t.size() - leadingZeros;

    if (_size == 0) {
        _array = new unsigned char[1]{'0'};
        _size = 1;
    } else {
        _array = new unsigned char[_size];
        int i = 0;
        for (auto it = t.end() - 1; it != t.begin() - 1 + leadingZeros; --it) {
            _array[i++] = *it;
        }
    }
}


Decimal::Decimal(const size_t& n, unsigned char t) {
    if (!std::isdigit(t)) throw std::invalid_argument("char should be a digit");
    if (t == '0') {
        _array = new unsigned char[1]{'0'};
        _size = 1;
    } else {
        _array = new unsigned char[n];
        for (int i = 0; i < n; i++) {
            _array[i] = t;
        }
        _size = n;
    }
}

Decimal::Decimal(const std::string &t) {
    size_t leadingZeros = 0;
    bool countZeros = true;
    for (int i = 0; i < t.size(); i++) {
        if (!std::isdigit(t[i])) throw std::invalid_argument("invalid number");
        if (countZeros && t[i] == '0') {
            leadingZeros++;
        } else {
            countZeros = false;
        }
    }

    _size = t.size() - leadingZeros;

    if (_size == 0) {
        _array = new unsigned char[1]{'0'};
        _size = 1;
    } else {
        _array = new unsigned char[_size];
        for (size_t i = 0; i < _size; i++) {
            _array[i] = t[t.size() - 1 - i];
        }
    }
}



Decimal::Decimal(const Decimal& other) {
    _size = other._size;
    _array = new unsigned char[_size];
    for (int i = 0; i < _size; i++) {
        _array[i] = other._array[i];
    }
}

Decimal::Decimal(Decimal&& other) noexcept {
    _size = other._size;
    _array = other._array;

    other._size = 0;
    other._array = nullptr;
}


bool Decimal::operator==(const Decimal& other) const{
    if (_size != other._size) return false;
    for (int i = 0; i < _size; i++) {
        if (_array[i] != other._array[i]) return false;
    } 
    return true;
}

bool Decimal::operator!= (const Decimal& other) const {
    return !(*this == other);
}

bool Decimal::operator< (const Decimal& other) const {
    if (_size == other._size) {
        int a, b;
        for (int i = _size - 1; i >= 0; i--) {
            a = _array[i] - '0';
            b = other._array[i] - '0';
            if (a < b) return true;
            else if (a > b) return false;
        }
        return false;
    } else if (_size > other._size) {
        return false;
    } else {
        return true;
    }
}

bool Decimal::operator> (const Decimal& other) const {
    if (_size == other._size) {
        int a, b;
        for (int i = _size - 1; i >= 0; i--) {
            a = _array[i] - '0';
            b = other._array[i] - '0';
            if (a < b) return false;
            else if (a > b) return true;
        }
        return false;
    } else if (_size > other._size) {
        return true;
    } else {
        return false;
    }
}

Decimal& Decimal::operator=(const Decimal& other) {
    if (this != &other) {
        delete[] _array;
        _size = other._size;
        _array = new unsigned char[_size];
        for (size_t i = 0; i < _size; i++) {
            _array[i] = other._array[i];
        }
    }
    return *this;
}


Decimal& Decimal::operator+= (const Decimal& other) {
    std::string res = "";
    int num1, num2, sum;
    int remainder = 0;
    for (int i = 0; i < std::max(_size, other._size); i++) {
        num1 = i < _size ? _array[i] - '0' : 0;
        num2 = i < other._size ? other._array[i] - '0' : 0;
        sum = num1 + num2 + remainder;

        if (sum >= 10) {
            remainder = 1;
            sum %= 10;
        } else remainder = 0;

        res += (sum + '0');
    }

    if (remainder > 0) res += '1';

    delete[] _array;

    _size = res.size();
    _array = new unsigned char[_size];
    
    for (size_t i = 0; i < _size; i++) {
        _array[i] = res[i];
    }

    return *this;
}

Decimal& Decimal::operator-= (const Decimal& other) {
    if (other._size > _size || other > *this) throw std::logic_error("decimal can't be negative");
    std::string res = "";
    int num1, num2, diff;
    int borrow = 0; 

    for (int i = 0; i < _size; i++) {
        num1 = i < _size ? _array[i] - '0' : 0;
        num2 = i < other._size ? other._array[i] - '0' : 0;

        diff = num1 - num2 - borrow;

        if (diff < 0) {
            borrow = 1;
            diff += 10;
        } else {
            borrow = 0;
        }

        res += (diff + '0');
    }

    while (res.size() > 1 && res.back() == '0') {
        res.pop_back();
    }

    delete[] _array;

    _size = res.size();
    _array = new unsigned char[_size];

    for (size_t i = 0; i < _size; i++) {
        _array[i] = res[i];
    }

    return *this;
}


std::ostream& Decimal::print(std::ostream& os) const {
    for (size_t i = _size; i > 0; i--) {
        os << _array[i - 1];
    }
    return os;
}



Decimal::~Decimal() {
    if (_size > 0) {
        _size = 0;
        delete[] _array;
        _array = nullptr;
    }
}