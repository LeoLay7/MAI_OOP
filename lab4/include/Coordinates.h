#ifndef COORDINATES_H
#define COORDINATES_H

#include <concepts>
#include <iostream>
#include <cmath>

template<typename T>
concept Scalar = std::is_arithmetic_v<T>;

template<Scalar T>
class Coordinates {
public:
    T x, y;

    Coordinates() : x(0), y(0) {}

    // Конструктор по умолчанию
    Coordinates(T x_val = 0, T y_val = 0) : x(x_val), y(y_val) {}

    // Конструктор копирования
    Coordinates(const Coordinates& other) : x(other.x), y(other.y) {}

    // Конструктор перемещения
    Coordinates(Coordinates&& other) noexcept : x(std::move(other.x)), y(std::move(other.y)) {}

    // Метод для получения X
    T GetX() const { return x; }

    // Метод для получения Y
    T GetY() const { return y; }

    // Вычисление расстояния между точками
    double DistanceTo(const Coordinates& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    }

    // Оператор сравнения для ==
    bool operator==(const Coordinates& other) const {
        return x == other.x && y == other.y;
    }

    // Оператор присваивания (копирование)
    Coordinates& operator=(const Coordinates& other) {
        if (this == &other)
            return *this;
        x = other.x;
        y = other.y;
        return *this;
    }

    // Оператор присваивания (перемещение)
    Coordinates& operator=(Coordinates&& other) noexcept {
        if (this == &other)
            return *this;
        x = std::move(other.x);
        y = std::move(other.y);
        return *this;
    }

    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& os, const Coordinates& coord) {
        return os << '(' << coord.x << ", " << coord.y << ')';
    }

    // Перегрузка оператора ввода
    friend std::istream& operator>>(std::istream& is, Coordinates& coord) {
        return is >> coord.x >> coord.y;
    }
};

#endif // COORDINATES_H
