#include <gtest/gtest.h>
#include "../includes/Square.h"

TEST(SquareTest, AreaCalculation) {
    Square square(0, 0, 5);
    EXPECT_DOUBLE_EQ(static_cast<double>(square), 25.0);
}

TEST(SquareTest, GeometricalCenter) {
    Square square(0, 0, 2);
    Coordinates center = square.geometricalCenter();
    EXPECT_DOUBLE_EQ(center.getX(), 1.0);
    EXPECT_DOUBLE_EQ(center.getY(), -1.0);
}
