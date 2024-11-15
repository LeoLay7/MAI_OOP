#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"
#include "Coordinates.h"
#include <iostream>
#include <memory>

template <typename T>
class Rectangle : public Figure<T> {
public:
    Rectangle() : width_(0), height_(0) {}
    Rectangle(const Coordinates<T>& center, T width, T height)
        : center_(std::make_unique<Coordinates<T>>(center)), width_(width), height_(height) {}

    Rectangle(const Rectangle& other)
        : center_(std::make_unique<Coordinates<T>>(*other.center_)), width_(other.width_), height_(other.height_) {}

    Rectangle(Rectangle&& other) noexcept
        : center_(std::move(other.center_)), width_(other.width_), height_(other.height_) {
        other.width_ = 0;
        other.height_ = 0;
    }

    Rectangle& operator=(const Rectangle& other) {
        if (this != &other) {
            center_ = std::make_unique<Coordinates<T>>(*other.center_);
            width_ = other.width_;
            height_ = other.height_;
        }
        return *this;
    }

    Rectangle& operator=(Rectangle&& other) noexcept {
        if (this != &other) {
            center_ = std::move(other.center_);
            width_ = other.width_;
            height_ = other.height_;
            other.width_ = 0;
            other.height_ = 0;
        }
        return *this;
    }

    bool operator==(const Figure<T>& other) const override {
        const auto* otherRect = dynamic_cast<const Rectangle<T>*>(&other);
        return otherRect && *center_ == *otherRect->center_ && width_ == otherRect->width_ && height_ == otherRect->height_;
    }

    operator double() const override {
        return static_cast<double>(width_) * height_;
    }

    Coordinates<T> GeometricCenter() const override {
        return *center_;
    }

    std::unique_ptr<Figure<T>> Clone() const override {
        return std::make_unique<Rectangle<T>>(*center_, width_, height_);
    }

    void print(std::ostream& os) const override {
        os << "Rectangle: Center = " << *center_ 
           << ", Width = " << width_ 
           << ", Height = " << height_ 
           << ", Area = " << static_cast<double>(*this);
    }

    void read(std::istream& is) override {
        T x, y;
        is >> x >> y >> width_ >> height_;
        *center_ = Coordinates<T>(x, y);
    }

private:
    std::unique_ptr<Coordinates<T>> center_;
    T width_;
    T height_;
};

#endif
