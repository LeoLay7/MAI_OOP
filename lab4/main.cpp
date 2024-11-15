#include "include/FigureArray.h"
#include "include/Square.h"
#include "include/Figure.h"
#include "include/Rectangle.h"
#include "include/Triangle.h"

int main() {
    FigureArray<Figure<int>*> figureArray(3);

    // создание и добавление
    figureArray.append(new Square<int>(Coordinates<int>(0, 0), 4));
    figureArray.append(new Rectangle<int>(Coordinates<int>(0, 0), 5, 3));
    figureArray.append(new Triangle<int>(
        Coordinates<int>(0, 0), Coordinates<int>(3, 0), Coordinates<int>(1, 2)));

    std::cout << "При FigureArray<Figure<int>*>:" << std::endl;
    std::cout << "До удаления:" << std::endl;
    figureArray.printCoordinates(std::cout);

    std::cout << "\n";

    figureArray.remove(1);

    std::cout << "После:" << std::endl;
    figureArray.printCoordinates(std::cout);

    std::cout << "\n";

    std::cout << "Площадь фигур: " << figureArray.getTotalArea() << std::endl;

    std::cout << "----------------------------------------" << std::endl;
    
    // создание и добавление
    FigureArray<Square<int>> squareArray(2);

    squareArray.append(Square<int>(Coordinates<int>(0, 0), 4));
    squareArray.append(Square<int>(Coordinates<int>(1, 1), 5));

    std::cout << "При FigureArray<Square<int>>:" << std::endl;
    std::cout << "До удаления:" << std::endl;
    squareArray.printCoordinates(std::cout);

    std::cout << "\n";

    squareArray.remove(0);

    std::cout << "После:" << std::endl;
    squareArray.printCoordinates(std::cout);

    std::cout << "\n";

    std::cout << "Площадь фигур: " << squareArray.getTotalArea() << std::endl;

    return 0;
}