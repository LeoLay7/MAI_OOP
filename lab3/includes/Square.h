#include "Figure.h"
#include "Coordinates.h"

class Square: public Figure {
    public:
        Square(double x, double y, double sideLength);

        Coordinates geometricalCenter() const override;
        operator double() const override;

        Figure& operator=(const Figure& other) override;
        Figure& operator=(Figure&& other) override;
        bool operator==(const Figure& other) const override;

        std::istream& read(std::istream& is) override;
        std::ostream& print(std::ostream& os) const override;

        Coordinates getLeftUpper() const;
        double getSideLength() const;

        virtual ~Square();
    private:
        Coordinates _leftUpper;
        double _sideLength;
};
