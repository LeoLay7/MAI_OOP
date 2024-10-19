#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include "Coordinates.h"


class Figure {
    public: 
        virtual Coordinates geometricalCenter() const = 0;
        virtual operator double() const = 0;
        
        virtual Figure& operator=(const Figure& other) {
            return *this;
        }
        virtual Figure& operator=(Figure&& other) = 0;
        virtual bool operator==(const Figure& other) const = 0;

        virtual std::istream& read(std::istream& is) = 0;
        virtual std::ostream& print(std::ostream& os) const = 0;

        virtual Figure* clone() const =0;

        friend std::istream& operator>>(std::istream& is, Figure& figure) {
            return figure.read(is);
        }

        friend std::ostream& operator<<(std::ostream& os, const Figure& figure) {
            return figure.print(os);
        }

        virtual ~Figure() = default;
};

#endif