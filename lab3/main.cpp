#include <iostream>
#include <memory>
#include <limits>
#include "includes/FigureArray.h"
#include "includes/Square.h"
#include "includes/Triangle.h"
#include "includes/Rectangle.h"


void printMenu() {
    std::cout << "\nМеню:\n"
              << "1. Добавить квадрат\n"
              << "2. Добавить треугольник\n"
              << "3. Добавить прямоугольник\n"
              << "4. Показать все фигуры (геометрический центр и площадь)\n"
              << "5. Вычислить общую площадь фигур\n"
              << "6. Удалить фигуру по индексу\n"
              << "7. Выход\n"
              << "Выберите опцию: ";
}

void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Rectangle* createRectangle() {
    double x, y, width, height;
    std::cout << "Введите координаты левого нижнего угла (x, y), ширину и высоту: ";
    std::cin >> x >> y >> width >> height;
    if (!std::cin) {
        std::cerr << "Некорректный ввод!\n";
        clearInput();
        return nullptr;
    }
    return new Rectangle(x, y, width, height);
}

Square* createSquare() {
    double x, y, side;
    std::cout << "Введите координаты левого нижнего угла (x, y) и длину стороны: ";
    std::cin >> x >> y >> side;
    if (!std::cin) {
        std::cerr << "Некорректный ввод!\n";
        clearInput();
        return nullptr;
    }
    return new Square(x, y, side);
}

Triangle* createTriangle() {
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Введите координаты трех вершин (x1, y1), (x2, y2), (x3, y3): ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (!std::cin) {
        std::cerr << "Некорректный ввод!\n";
        clearInput();
        return nullptr;
    }
    return new Triangle(x1, y1, x2, y2, x3, y3);
}

void printAllFigures(const FigureArray& array) {
    std::cout << "\nФигуры в массиве:\n";
    array.getCoordinates(std::cout);
}

void printTotalArea(const FigureArray& array) {
    std::cout << "Общая площадь всех фигур: " << array.getTotalArea() << "\n";
}

void deleteFigure(FigureArray& array) {
    int index;
    std::cout << "Введите индекс фигуры для удаления: ";
    std::cin >> index;
    array.remove(index);
    std::cout << "Фигура успешно удалена.\n";
}

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    if (!std::cin || size <= 0) {
        std::cerr << "Некорректный размер массива!\n";
        return 1;
    }

    FigureArray array(size);
    int option;

    do {
        printMenu();
        std::cin >> option;

        if (!std::cin) {
            std::cerr << "Некорректный ввод!\n";
            clearInput();
            continue;
        }

        switch (option) {
            case 1: {
                Square* square = createSquare();
                if (square) {
                    array.append(square);
                    std::cout << "Квадрат добавлен.\n";
                }
                break;
            }
            case 2: {
                Triangle* triangle = createTriangle();
                if (triangle) {
                    array.append(triangle);
                    std::cout << "Треугольник добавлен.\n";
                }
                break;
            }
            case 3: {
                Rectangle* rectangle = createRectangle();
                if (rectangle) {
                    array.append(rectangle);
                    std::cout << "Прямоугольник добавлен.\n";
                }
                break;
            }
            case 4:
                printAllFigures(array);
                break;
            case 5:
                printTotalArea(array);
                break;
            case 6:
                deleteFigure(array);
                break;
            case 7:
                std::cout << "Выход из программы...\n";
                break;
            default:
                std::cerr << "Неверная опция! Попробуйте еще раз.\n";
        }
    } while (option != 7);

    return 0;
}