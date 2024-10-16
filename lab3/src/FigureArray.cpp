#include "../includes/FigureArray.h"
#include "../includes/Figure.h"

FigureArray::FigureArray(int n) {
    _array = new Figure*[n];
    _size = n;
}

FigureArray::FigureArray(std::initializer_list<Figure*> init) {
    _size = init.size();
    _array = new Figure*[_size];
    int i = 0;
    for (auto figure: init) {
        _array[i++] = figure;
    }
}

FigureArray::FigureArray(const FigureArray& other) {
    _size = other._size;
    _array = new Figure*[_size];
    for (int i = 0; i < _size; i++) {
        _array[i] = other._array[i]; //добавить clone()
    }
}

FigureArray::FigureArray(FigureArray&& other) noexcept {
    _array = other._array;
    _size = other._size;

    other._array = nullptr;
    other._size = 0;
}

void FigureArray::set(int index, Figure* figure) {
    if (index < 0 || index > _size) return;
    remove(index);
    _array[index] = figure;
}

Figure* FigureArray::get(int index) const {
    if (index < 0 || index > _size) return nullptr;
    return _array[index];
}

std::ostream& FigureArray::getCoordinates(std::ostream& os) const {
    for (int i = 0; i < _size; i++) {
        if (_array[i] && _array[i] != nullptr) {
            _array[i]->print(os);
            os << "\n";
        }
    }
    return os;
}

std::ostream& FigureArray::getGeometricalCenter(std::ostream& os) const {
    for (int i = 0; i < _size; i++) {
        if (_array[i]) {
            os << _array[i]->geometricalCenter() << "\n";
        }
    }
    return os;
}

double FigureArray::getTotalArea() const {
    double totalArea = 0;
    for (int i = 0; i < _size; ++i) {
        if (_array[i]) {
            totalArea += static_cast<double>(*_array[i]);
        }
    }
    return totalArea;
}

void FigureArray::remove(int index) {
    if (index < 0 || index > _size) return;
    if (_array[index] != nullptr) {
        delete _array[index];
        _array[index] = nullptr;
    }
}

FigureArray::~FigureArray() {
    for (int i = 0; i < _size; ++i) {
        delete _array[i];
    }
    delete[] _array;
}