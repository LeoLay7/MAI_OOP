#ifndef SQUARE_H
#define SQUARE_H

#include "Figure.h"
#include "Coordinates.h"
#include <cmath>
#include <iostream>
#include <memory>

template<typename T>
class Square : public Figure<T> {
public:
    Square() : side_(0) {};
    Square(const Coordinates<T>& center, T side)
        : center_(std::make_unique<Coordinates<T>>(center)), side_(side) {}

    Square(const Square& other) 
        : center_(std::make_unique<Coordinates<T>>(*other.center_)), side_(other.side_) {}

    Square(Square&& other) noexcept
        : center_(std::move(other.center_)), side_(other.side_) {
        other.side_ = 0;
    }

    Square& operator=(const Square& other) {
        if (this != &other) {
            center_ = std::make_unique<Coordinates<T>>(*other.center_);
            side_ = other.side_;
        }
        return *this;
    }

    Square& operator=(Square&& other) noexcept {
        if (this != &other) {
            center_ = std::move(other.center_);
            side_ = other.side_;
            other.side_ = 0;
        }
        return *this;
    }

    bool operator==(const Figure<T>& other) const override {
        const auto* otherSquare = dynamic_cast<const Square*>(&other);
        return otherSquare && *center_ == *otherSquare->center_ && side_ == otherSquare->side_;
    }

    operator double() const override {
        return static_cast<double>(side_) * side_;
    }

    Coordinates<T> GeometricCenter() const override {
        return *center_;
    }

    std::unique_ptr<Figure<T>> Clone() const override {
        return std::make_unique<Square<T>>(*center_, side_);
    }

    void print(std::ostream& os) const override {
        os << "Square: Center = " << *center_ 
           << ", Side = " << side_ 
           << ", Area = " << static_cast<double>(*this);
    }

    void read(std::istream& is) override {
        T x, y;
        is >> x >> y >> side_;
        *center_ = Coordinates<T>(x, y);
    }

private:
    std::unique_ptr<Coordinates<T>> center_;
    T side_;
};

#endif
