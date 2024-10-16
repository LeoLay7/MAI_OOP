#ifndef COORDINATES_H
#define COORDINATES_H

#include <iostream>

class Coordinates {
    private:
        double _x;
        double _y;
    public:
        Coordinates();
        Coordinates(double x, double y);
        Coordinates(const Coordinates& other);
        Coordinates(Coordinates&& other) noexcept;

        double getX() const;
        double getY() const;

        Coordinates& operator=(const Coordinates& other);
        Coordinates& operator=(Coordinates&& other) noexcept;

        bool operator==(const Coordinates& other) const;
        bool operator<(const Coordinates& other) const;

        std::ostream& print(std::ostream& os) const;

        friend std::ostream& operator<<(std::ostream& os, const Coordinates& coordinates) {
            return coordinates.print(os);
        }
};

#endif
