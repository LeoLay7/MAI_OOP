#include "../includes/Coordinates.h"
#include "../includes/Square.h"


Square::Square(double x, double y, double sideLength)
    : _leftUpper(x, y), _sideLength(sideLength) {}

Square::Square(const Square& other) {
    _sideLength = other._sideLength;
    _leftUpper = other._leftUpper;
}

Coordinates Square::getLeftUpper() const {
    return _leftUpper;
}

double Square::getSideLength() const {
    return _sideLength;
}

Coordinates Square::geometricalCenter() const {
    double centerX = _leftUpper.getX() + (_sideLength / 2);
    double centerY = _leftUpper.getY() - (_sideLength / 2);
    return Coordinates(centerX, centerY);
}

Square::operator double() const {
    return _sideLength * _sideLength;
}

Figure& Square::operator=(const Figure& other) {
    // Добавить удаление Coordinates _leftUpper
    if (this == &other) {
        return *this;
    }
    const Square& otherSquare = dynamic_cast<const Square&>(other);
    if (!otherSquare) {
        throw std::invalid_argument("Other is not a Square");
    }
    
    _leftUpper = otherSquare.getLeftUpper(); // сделать move
    _sideLength = otherSquare.getSideLength();
    return *this;
}

Figure& Square::operator=(Figure&& other) {
    if (this == &other) {
        return *this;
    }
    
    Square* otherSquare = dynamic_cast<Square*>(&other);
    if (!otherSquare) {
        throw std::invalid_argument("Other is not a Square");
    }

    _leftUpper = std::move(otherSquare->_leftUpper);
    _sideLength = otherSquare->_sideLength;
    return *this;
}

bool Square::operator==(const Figure& other) const {
    const Square* otherSquare = dynamic_cast<const Square*>(&other);
    if (!otherSquare) {
        return false;
    }
    return (getLeftUpper() == otherSquare->getLeftUpper()) && (getSideLength() == otherSquare->getSideLength());
}



std::istream& Square::read(std::istream& is) {
    double x, y;
    is >> x >> y >> _sideLength;
    _leftUpper = Coordinates(x, y);
    return is;
}

std::ostream& Square::print(std::ostream& os) const {
    os << "Квадрат с левой верхней вершиной (" << _leftUpper.getX() << ", " 
           << _leftUpper.getY() << ") и длиной стороны " << _sideLength << '\n';
    return os;
}

Figure* Square::clone() const {
    return new Square(*this);
}

Square::~Square() {
    // Деструктор может быть пустым, так как не требуется явного освобождения ресурсов
}
