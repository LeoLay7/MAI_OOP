#include "../includes/Coordinates.h"
#include <iostream>
#include <ostream>

Coordinates::Coordinates() {
    _x = 0;
    _y = 0;
}

Coordinates::Coordinates(double x, double y) {
    _x = x;
    _y = y;
}

Coordinates::Coordinates(const Coordinates& other) {
    _x = other.getX();
    _y = other.getY();
}

Coordinates::Coordinates(Coordinates&& other) noexcept {
    _x = other._x;
    _y = other._y;

    other._x = 0;
    other._y = 0;
}

Coordinates& Coordinates::operator=(const Coordinates& other) {
    if (this != &other) {
        _x = other.getX();
        _y = other.getY();
    }
    return *this;
}

Coordinates& Coordinates::operator=(Coordinates&& other) noexcept {
    if (this != &other) {
        _x = other._x;
        _y = other._y;
        
        other._x = 0;
        other._y = 0;
    }
    return *this;
}

bool Coordinates::operator==(const Coordinates& other) const {
    return getX() == other.getX() && getY() == other.getY();
}

bool Coordinates::operator<(const Coordinates& other) const {
    return (getX() < other.getX()) || (getX() == other.getX() && getY() < other.getY());
}


double Coordinates::getX() const {
    return _x;
}

double Coordinates::getY() const {
    return _y;
}

std::ostream& Coordinates::print(std::ostream& os) const {
    os << "(" << _x << ", " << _y << ")";
    return os;
}