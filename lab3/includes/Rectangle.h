#include "Figure.h"


class Rectangle: public Figure {
    private:
        Coordinates _leftUpper;
        double _height;
        double _width;
    public:
        Rectangle(double x, double y, double width, double height);
        Rectangle(const Rectangle& other);

        Coordinates geometricalCenter() const override;
        operator double() const override;

        Figure& operator=(const Figure& other) override;
        Figure& operator=(Figure&& other) override;
        bool operator==(const Figure& other) const override;

        std::istream& read(std::istream& is) override;
        std::ostream& print(std::ostream& os) const override;

        Figure* clone() const override;

        Coordinates getLeftUpper() const;
        double getWidth() const;
        double getHeight() const;

        virtual ~Rectangle();
};