#include <gtest/gtest.h>
#include "../include/FigureArray.h"
#include "../include/Square.h"
#include "../include/Rectangle.h"
#include "../include/Triangle.h"

TEST(FigureArrayTest, TestAppendAndResize) {
    auto square = new Square<int>(Coordinates<int>(0, 0), 4);
    auto rectangle = new Rectangle<int>(Coordinates<int>(0, 0), 5, 3);
    auto triangle = new Triangle<int>(
        Coordinates<int>(0, 0), Coordinates<int>(3, 0), Coordinates<int>(1, 2));

    FigureArray<Figure<int>*> array(2);
    
    array.append(square);
    array.append(rectangle);
    
    EXPECT_EQ(array.get(0), square);
    EXPECT_EQ(array.get(1), rectangle);
    
    array.append(triangle);

    EXPECT_EQ(array.get(2), triangle);
}

TEST(FigureArrayTest, TestRemove) {
    auto square1 = new Square<int>(Coordinates<int>(0, 0), 4);
    auto square2 = new Square<int>(Coordinates<int>(0, 0), 2);
    FigureArray<Figure<int>*> array(2);
    array.append(square1);
    array.append(square2);
    
    array.remove(0);
    EXPECT_EQ(array.size(), 1);
}

TEST(FigureArrayTest, TestGetTotalArea) {
    auto square1 = new Square<int>(Coordinates<int>(0, 0), 4);
    auto rectangle = new Rectangle<int>(Coordinates<int>(0, 0), 5, 3);
    auto square2 = new Square<int>(Coordinates<int>(0, 0), 4);

    FigureArray<Figure<int>*> array(3);
    array.append(square1);
    array.append(rectangle);
    array.append(square2);

    double expectedTotalArea = 16.0 + 15.0 + 16.0;
    EXPECT_DOUBLE_EQ(array.getTotalArea(), expectedTotalArea);
}

TEST(FigureArrayTest, TestAppendDifferentTypes) {
    auto square = new Square<int>(Coordinates<int>(0, 0), 4);
    auto rectangle = new Rectangle<int>(Coordinates<int>(0, 0), 5, 3);

    FigureArray<Figure<int>*> array(2);
    array.append(square);
    array.append(rectangle);

    EXPECT_EQ(array.get(0), square);
    EXPECT_EQ(array.get(1), rectangle);
}

TEST(FigureArrayTest, TestResizeAndAppend) {
    FigureArray<Figure<int>*> array(2);

    auto square = new Square<int>(Coordinates<int>(0, 0), 4);
    auto rectangle = new Rectangle<int>(Coordinates<int>(0, 0), 5, 3);
    array.append(square);
    array.append(rectangle);

    EXPECT_EQ(array.get(0), square);
    EXPECT_EQ(array.get(1), rectangle);

    auto triangle = new Triangle<int>(
        Coordinates<int>(0, 0), Coordinates<int>(3, 0), Coordinates<int>(1, 2));
    array.append(triangle);

    EXPECT_EQ(array.get(2), triangle);
}
