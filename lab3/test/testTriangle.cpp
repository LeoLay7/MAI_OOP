#include <gtest/gtest.h>
#include "../includes/Triangle.h"

TEST(TriangleTest, AreaCalculation) {
    Triangle triangle(0, 0, 4, 0, 2, 2);
    EXPECT_DOUBLE_EQ(static_cast<double>(triangle), 4.0);
}

TEST(TriangleTest, GeometricalCenter) {
    Triangle triangle(0, 0, 6, 0, 3, 3);
    Coordinates center = triangle.geometricalCenter();
    EXPECT_DOUBLE_EQ(center.getX(), 3.0);
    EXPECT_DOUBLE_EQ(center.getY(), 1.0);
}
