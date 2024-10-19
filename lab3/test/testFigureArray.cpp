#include <gtest/gtest.h>
#include "../includes/FigureArray.h"
#include "../includes/Square.h"
#include "../includes/Triangle.h"
#include "../includes/Rectangle.h"

TEST(FigureArrayTest, Initialization) {
    FigureArray array(3);
    ASSERT_EQ(array.get(0), nullptr);
    ASSERT_EQ(array.get(1), nullptr);
    ASSERT_EQ(array.get(2), nullptr);
}

TEST(FigureArrayTest, AppendAndGet) {
    FigureArray array(3);
    auto* square = new Square(0, 0, 4);
    auto* triangle = new Triangle(0, 0, 0, 3, 3, 0);

    array.append(square);
    array.append(triangle);

    EXPECT_EQ(array.get(0), square);
    EXPECT_EQ(array.get(1), triangle);
    EXPECT_EQ(array.get(2), nullptr);
}

TEST(FigureArrayTest, TotalArea) {
    FigureArray array(3);
    array.append(new Square(0, 0, 2));
    array.append(new Rectangle(0, 0, 4, 1));

    EXPECT_DOUBLE_EQ(array.getTotalArea(), 8.0);

    array.append(new Square(0, 0, 1));
    EXPECT_DOUBLE_EQ(array.getTotalArea(), 9.0);
}

TEST(FigureArrayTest, RemoveElement) {
    FigureArray array(2);
    auto* square = new Square(0, 0, 2);
    array.append(square);
    array.remove(0);

    EXPECT_EQ(array.get(0), nullptr);
    EXPECT_DOUBLE_EQ(array.getTotalArea(), 0.0);
}

TEST(FigureArrayTest, CopyConstructor) {
    FigureArray array1(2);
    array1.append(new Square(0, 0, 2));
    array1.append(new Rectangle(0, 0, 4, 1));

    FigureArray array2 = FigureArray(array1);

    EXPECT_DOUBLE_EQ(array2.getTotalArea(), array1.getTotalArea());
    EXPECT_EQ(array2.get(0)->geometricalCenter(), array1.get(0)->geometricalCenter());
    EXPECT_EQ(array2.get(1)->geometricalCenter(), array1.get(1)->geometricalCenter());
}

TEST(FigureArrayTest, MoveConstructor) {
    FigureArray array1(2);
    array1.append(new Square(0, 0, 2));
    array1.append(new Triangle(0, 0, 0, 2, 2, 0));

    FigureArray array2 = std::move(array1);

    EXPECT_DOUBLE_EQ(array2.getTotalArea(), 6.0);
    EXPECT_EQ(array1.get(0), nullptr);
    EXPECT_EQ(array1.get(1), nullptr);
}

TEST(FigureArrayTest, SetElement) {
    FigureArray array(2);
    auto* square1 = new Square(0, 0, 2);
    auto* square2 = new Square(1, 1, 3);

    array.set(0, square1);
    EXPECT_EQ(array.get(0), square1);

    array.set(0, square2);
    EXPECT_EQ(array.get(0), square2);
    EXPECT_EQ(array.get(1), nullptr);
}

TEST(FigureArrayTest, GetGeometricalCenters) {
    FigureArray array(2);
    array.append(new Square(0, 0, 4));
    array.append(new Triangle(0, 0, 4, 0, 2, 4));

    std::ostringstream oss;
    array.getGeometricalCenter(oss);
    std::string expected = "(2, -2)\n(2, 1.33333)\n";

    EXPECT_EQ(oss.str(), expected);
}

TEST(FigureArrayTest, CapacityLimit) {
    FigureArray array(2);
    auto* square1 = new Square(0, 0, 2);
    auto* square2 = new Square(1, 1, 3);
    auto* square3 = new Square(2, 2, 1);

    array.append(square1);
    array.append(square2);
    array.append(square3);

    EXPECT_EQ(array.get(0), square1);
    EXPECT_EQ(array.get(1), square2);
    EXPECT_EQ(array.get(2), nullptr);
}
