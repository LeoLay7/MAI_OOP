#include "../includes/Figure.h"
#include "../includes/Rectangle.h"


Rectangle::Rectangle(double x, double y, double width, double height)
    : _leftUpper(x, y), _width(width), _height(height) {}

Coordinates Rectangle::getLeftUpper() const {
    return _leftUpper;
}

double Rectangle::getWidth() const {
    return _width;
}

double Rectangle::getHeight() const {
    return _height;
}

Coordinates Rectangle::geometricalCenter() const {
    double centerX = _leftUpper.getX() + (getWidth() / 2);
    double centerY = _leftUpper.getY() - (getHeight() / 2);
    return Coordinates(centerX, centerY);
}

Rectangle::operator double() const {
    return getWidth() * getHeight();
}

Figure& Rectangle::operator=(const Figure& other) {
    if (this == &other) {
        return *this;
    }
    const Rectangle& otherRec = dynamic_cast<const Rectangle&>(other);
    if (!otherRec) {
        throw std::invalid_argument("Other is not a Rectangle");
    }

    _leftUpper = otherRec.getLeftUpper(); // do move
    _width = otherRec.getWidth();
    _height = otherRec.getHeight();
    return *this;
}

Figure& Rectangle::operator=(Figure&& other) {
    if (this == &other) {
        return *this;
    }

    Rectangle* otherRec = dynamic_cast<Rectangle*>(&other);
    if (!otherRec) {
        throw std::invalid_argument("Other is not a Rectangle");
    }

    _leftUpper = std::move(otherRec->_leftUpper);
    _width = std::move(otherRec->_width);
    _height = std::move(otherRec->_height);
    
    return *this;
}

bool Rectangle::operator==(const Figure& other) const {
    const Rectangle* otherSquare = dynamic_cast<const Rectangle*>(&other);
    if (!otherSquare) {
        return false;
    }
    return (getLeftUpper() == otherSquare->getLeftUpper()) &&
            (getWidth() == otherSquare->getWidth()) &&
            (getHeight() == otherSquare->getHeight());
}

std::istream& Rectangle::read(std::istream& is) {
    double x, y;
    is >> x >> y >> _width >> _height;
    _leftUpper = Coordinates(x, y);
    return is;
}

std::ostream& Rectangle::print(std::ostream& os) const {
    os << "Rectangle with upper left corner at (" << _leftUpper.getX() << ", " 
        << _leftUpper.getY() << ") and width " << _width << " and height "
        << _height << "\n";
    return os;
}

Rectangle::~Rectangle() {
    // Деструктор может быть пустым, так как не требуется явного освобождения ресурсов
}