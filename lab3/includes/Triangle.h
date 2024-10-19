#include "Figure.h"
#include <vector>

class Triangle: public Figure {
    private:
        Coordinates _first;
        Coordinates _second;
        Coordinates _third;
    public:
        Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
        Triangle(const Triangle& other);

        Coordinates geometricalCenter() const override;
        operator double() const override;

        Figure& operator=(const Figure& other) override;
        Figure& operator=(Figure&& other) override;
        bool operator==(const Figure& other) const override;

        std::istream& read(std::istream& is) override;
        std::ostream& print(std::ostream& os) const override;

        std::vector<Coordinates> getVertices() const;

        Figure* clone() const override;

        virtual ~Triangle();
};