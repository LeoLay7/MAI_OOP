#include "../includes/Figure.h"
#include "../includes/Triangle.h"
#include <algorithm>


Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    std::vector<Coordinates> vertices = {
        Coordinates(x1, y1), Coordinates(x2, y2), Coordinates(x3, y3)
    };
    std::sort(vertices.begin(), vertices.end()); // Сортируем вершины

    _first = vertices[0];
    _second = vertices[1];
    _third = vertices[2];
}

std::vector<Coordinates> Triangle::getVertices() const {
    return {_first, _second, _third};
}

Coordinates Triangle::geometricalCenter() const {
    double centerX = (_first.getX() + _second.getX() + _third.getX()) / 3;
    double centerY = (_first.getY() + _second.getY() + _third.getY()) / 3;
    return Coordinates(centerX, centerY);
}

Triangle::operator double() const {
    double S = 0.5 * std::abs(
        (_first.getX() - _third.getX()) * (_second.getY() - _first.getY()) -
        (_first.getX() - _second.getX()) * (_third.getY() - _first.getY())
    );
    return S;
}

Figure& Triangle::operator=(const Figure& other) {
    if (this == &other) return *this;

    const Triangle* otherTriangle = dynamic_cast<const Triangle*>(&other);
    if (!otherTriangle) {
        throw std::invalid_argument("Other is not a Triangle");
    }

    _first = otherTriangle->_first;
    _second = otherTriangle->_second;
    _third = otherTriangle->_third;

    return *this;
}


Figure& Triangle::operator=(Figure&& other) {
    Triangle* otherTriangle = dynamic_cast<Triangle*>(&other);
    if (!otherTriangle) {
        throw std::invalid_argument("Other is not a Triangle");
    }

    _first = std::move(otherTriangle->_first);
    _second = std::move(otherTriangle->_second);
    _third = std::move(otherTriangle->_third);

    return *this;
}


bool Triangle::operator==(const Figure& other) const {
    const Triangle* otherTriangle = dynamic_cast<const Triangle*>(&other);
    if (!otherTriangle) return false;

    return getVertices() == otherTriangle->getVertices();
}

std::istream& Triangle::read(std::istream& is) {
    double x1, y1, x2, y2, x3, y3;
    is >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    *this = Triangle(x1, y1, x2, y2, x3, y3);  // Используем оператор присваивания
    return is;
}


std::ostream& Triangle::print(std::ostream& os) const {
    os << "Triangle:\n" 
        << _first.getX() << " " << _first.getY() << "\n"
        << _second.getX() << " " << _second.getY() << "\n"
        << _third.getX() << " " << _third.getY() << "\n";
    return os;
}


Triangle::~Triangle() {}