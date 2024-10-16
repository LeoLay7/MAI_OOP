#include <iostream>
#include "includes/Coordinates.h"
#include "includes/Figure.h"
#include "includes/Square.h"
#include "includes/Rectangle.h"
#include "includes/Triangle.h"
#include "includes/FigureArray.h"

// Функция проверки работы класса Square
void checkSquare() {
    // 1. Создание объекта Square
    Square s1(1.0, 1.0, 5.0);
    std::cout << "Созданный квадрат: " << s1 << std::endl;

    // 2. Вычисление геометрического центра
    Coordinates center = s1.geometricalCenter();
    std::cout << "Геометрический центр квадрата: (" << center.getX() << ", " << center.getY() << ")" << std::endl;

    // 3. Преобразование квадрата в площадь через operator double()
    double area = static_cast<double>(s1);
    std::cout << "Площадь квадрата: " << area << std::endl;

    // 4. Проверка оператора присваивания
    Square s2(2.0, 2.0, 3.0);
    s2 = s1;
    std::cout << "Квадрат s2 после присваивания s1: " << s2 << std::endl;

    // 5. Проверка оператора равенства
    if (s1 == s2) {
        std::cout << "Квадраты s1 и s2 равны." << std::endl;
    } else {
        std::cout << "Квадраты s1 и s2 не равны." << std::endl;
    }

    // 6. Ввод нового квадрата
    std::cout << "Введите координаты верхнего левого угла и длину стороны нового квадрата: ";
    Square s3(0, 0, 0);
    std::cin >> s3;
    std::cout << "Введенный квадрат: " << s3 << std::endl;

    // 7. Демонстрация полиморфизма через базовый класс Figure
    Figure* figure = &s1;
    std::cout << "Полиморфный вызов для квадрата через базовый класс Figure: " << *figure << std::endl;
}

// Функция проверки работы класса Rectangle
void checkRectangle() {
    // 1. Создание объекта Rectangle
    Rectangle r1(0.0, 5.0, 4.0, 3.0);
    std::cout << "Созданный прямоугольник: " << r1 << std::endl;

    // 2. Вычисление геометрического центра
    Coordinates center = r1.geometricalCenter();
    std::cout << "Геометрический центр прямоугольника: (" << center.getX() << ", " << center.getY() << ")" << std::endl;

    // 3. Преобразование прямоугольника в площадь через operator double()
    double area = static_cast<double>(r1);
    std::cout << "Площадь прямоугольника: " << area << std::endl;

    // 4. Проверка оператора присваивания
    Rectangle r2(2.0, 2.0, 3.0, 4.0);
    r2 = r1;
    std::cout << "Прямоугольник r2 после присваивания r1: " << r2 << std::endl;

    // 5. Проверка оператора равенства
    if (r1 == r2) {
        std::cout << "Прямоугольники r1 и r2 равны." << std::endl;
    } else {
        std::cout << "Прямоугольники r1 и r2 не равны." << std::endl;
    }

    // 6. Ввод нового прямоугольника
    std::cout << "Введите координаты верхнего левого угла, ширину и высоту нового прямоугольника: ";
    Rectangle r3(0, 0, 0, 0);
    std::cin >> r3;
    std::cout << "Введенный прямоугольник: " << r3 << std::endl;

    // 7. Демонстрация полиморфизма через базовый класс Figure
    Figure* figure = &r1;
    std::cout << "Полиморфный вызов для прямоугольника через базовый класс Figure: " << *figure << std::endl;
}

// Функция проверки работы класса Triangle
void checkTriangle() {
    // 1. Создание объекта Triangle
    Triangle t1(0.0, 0.0, 3.0, 0.0, 1.5, 2.5);
    std::cout << "Созданный треугольник: " << t1 << std::endl;

    // 2. Вычисление геометрического центра
    Coordinates center = t1.geometricalCenter();
    std::cout << "Геометрический центр треугольника: (" << center.getX() << ", " << center.getY() << ")" << std::endl;

    // 3. Преобразование треугольника в площадь через operator double()
    double area = static_cast<double>(t1);
    std::cout << "Площадь треугольника: " << area << std::endl;

    // 4. Проверка оператора присваивания
    Triangle t2(1.0, 1.0, 2.0, 2.0, 3.0, 3.0);
    t2 = t1;
    std::cout << "Треугольник t2 после присваивания t1: " << t2 << std::endl;

    // 5. Проверка оператора равенства
    if (t1 == t2) {
        std::cout << "Треугольники t1 и t2 равны." << std::endl;
    } else {
        std::cout << "Треугольники t1 и t2 не равны." << std::endl;
    }

    // 6. Ввод нового треугольника
    std::cout << "Введите координаты трех вершин нового треугольника: ";
    Triangle t3(0, 0, 0, 0, 0, 0);
    std::cin >> t3;
    std::cout << "Введенный треугольник: " << t3 << std::endl;

    // 7. Демонстрация полиморфизма через базовый класс Figure
    Figure* figure = &t1;
    std::cout << "Полиморфный вызов для треугольника через базовый класс Figure: " << *figure << std::endl;
}

void checkFigureArray() {
    // 1. Создаем объекты фигур
    Figure* square = new Square(0.0, 0.0, 4.0);
    Figure* rectangle = new Rectangle(1.0, 1.0, 6.0, 3.0);
    Figure* triangle = new Triangle(0.0, 0.0, 1.0, 3.0, 4.0, 0.0);

    // 2. Создаем массив фигур с инициализацией
    FigureArray array = {square, rectangle, triangle};

    // 3. Выводим координаты всех фигур
    std::cout << "Координаты фигур в массиве:" << std::endl;
    array.getCoordinates(std::cout);

    // 4. Вычисляем и выводим геометрические центры фигур
    std::cout << "\nГеометрические центры фигур:" << std::endl;
    array.getGeometricalCenter(std::cout);

    // 5. Вычисляем и выводим общую площадь всех фигур
    double totalArea = array.getTotalArea();
    std::cout << "\nОбщая площадь всех фигур: " << totalArea << std::endl;

    // 6. Заменяем фигуру по индексу
    Figure* newSquare = new Square(2.0, 2.0, 2.0);
    array.set(1, newSquare);  // Заменим прямоугольник на новый квадрат

    std::cout << "\nМассив после замены фигуры на индексе 1:" << std::endl;
    array.getCoordinates(std::cout);

    // 7. Удаляем фигуру на индексе 2
    array.remove(2);

    std::cout << "\nМассив после удаления фигуры на индексе 2:" << std::endl;
    array.getCoordinates(std::cout);

    // 8. Освобождаем выделенную память (массив автоматически освободит свои фигуры)
    std::cout << "\nТестирование FigureArray завершено." << std::endl;
}


int main() {
    std::cout << "=== Проверка работы классов ===\n";
    
    // // Проверка каждого класса
    // checkSquare();
    // std::cout << std::endl;

    // checkRectangle();
    // std::cout << std::endl;

    // checkTriangle();
    checkSquare();
    std::cout<< std::endl;

    return 0;
}
