#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include "Coordinates.h"
#include <iostream>
#include <memory>
#include <array>
#include <algorithm>

template <typename T>
class Triangle : public Figure<T> {
public:
    Triangle() {}
    Triangle(const Coordinates<T>& first, const Coordinates<T>& second, const Coordinates<T>& third)
        : _first(std::make_unique<Coordinates<T>>(first)), 
          _second(std::make_unique<Coordinates<T>>(second)),
          _third(std::make_unique<Coordinates<T>>(third)) {
        SortCoordinates();
    }

    Triangle(const Triangle& other)
        : _first(std::make_unique<Coordinates<T>>(*other._first)),
          _second(std::make_unique<Coordinates<T>>(*other._second)),
          _third(std::make_unique<Coordinates<T>>(*other._third)) {
        SortCoordinates();
    }

    Triangle(Triangle&& other) noexcept
        : _first(std::move(other._first)),
          _second(std::move(other._second)),
          _third(std::move(other._third)) {}

    Triangle& operator=(const Triangle& other) {
        if (this != &other) {
            _first = std::make_unique<Coordinates<T>>(*other._first);
            _second = std::make_unique<Coordinates<T>>(*other._second);
            _third = std::make_unique<Coordinates<T>>(*other._third);
            SortCoordinates();
        }
        return *this;
    }

    Triangle& operator=(Triangle&& other) noexcept {
        if (this != &other) {
            _first = std::move(other._first);
            _second = std::move(other._second);
            _third = std::move(other._third);
        }
        return *this;
    }

    bool operator==(const Figure<T>& other) const override {
        const auto* otherTriangle = dynamic_cast<const Triangle<T>*>(&other);
        return otherTriangle && *_first == *otherTriangle->_first &&
               *_second == *otherTriangle->_second &&
               *_third == *otherTriangle->_third;
    }

    operator double() const override {
        T a = _first->DistanceTo(*_second);
        T b = _first->DistanceTo(*_third);
        T c = _second->DistanceTo(*_third);
        T s = (a + b + c) / 2; // полупериметр
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    Coordinates<T> GeometricCenter() const override {
        T centerX = (_first->GetX() + _second->GetX() + _third->GetX()) / 3;
        T centerY = (_first->GetY() + _second->GetY() + _third->GetY()) / 3;
        return Coordinates<T>(centerX, centerY);
    }

    std::unique_ptr<Figure<T>> Clone() const override {
        return std::make_unique<Triangle<T>>(*_first, *_second, *_third);
    }

    void print(std::ostream& os) const override {
        os << "Triangle: First = " << *_first << ", Second = " << *_second 
           << ", Third = " << *_third << ", Area = " << static_cast<double>(*this);
    }

    void read(std::istream& is) override {
        T x1, y1, x2, y2, x3, y3;
        is >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        *_first = Coordinates<T>(x1, y1);
        *_second = Coordinates<T>(x2, y2);
        *_third = Coordinates<T>(x3, y3);
        SortCoordinates();
    }

private:
    void SortCoordinates() {
        std::array<Coordinates<T>*, 3> coords = {_first.get(), _second.get(), _third.get()};
        std::sort(coords.begin(), coords.end(), [](Coordinates<T>* a, Coordinates<T>* b) {
            return a->GetX() < b->GetX() || (a->GetX() == b->GetX() && a->GetY() < b->GetY());
        });
        _first = std::make_unique<Coordinates<T>>(*coords[0]);
        _second = std::make_unique<Coordinates<T>>(*coords[1]);
        _third = std::make_unique<Coordinates<T>>(*coords[2]);
    }

    std::unique_ptr<Coordinates<T>> _first, _second, _third;
};

#endif