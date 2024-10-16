#include "Figure.h"


class FigureArray {
    private:
        Figure** _array;
        int _size;
    public:
        FigureArray(int n);
        FigureArray(std::initializer_list<Figure*> init);
        FigureArray(const FigureArray& other);
        FigureArray(FigureArray&& other) noexcept;

        void set(int index, Figure* figure);
        Figure* get(int index) const;

        std::ostream& getCoordinates(std::ostream& os) const;
        std::ostream& getGeometricalCenter(std::ostream& os) const;
        double getTotalArea() const;
        void remove(int index);
        
        virtual ~FigureArray();
};