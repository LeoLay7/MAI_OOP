#include <gtest/gtest.h>
#include "../includes/Rectangle.h"

TEST(RectangleTest, AreaCalculation) {
    Rectangle rect(0, 0, 4, 5);
    EXPECT_DOUBLE_EQ(static_cast<double>(rect), 20.0);
}

TEST(RectangleTest, GeometricalCenter) {
    Rectangle rect(0, 0, 4, 2);
    Coordinates center = rect.geometricalCenter();
    EXPECT_DOUBLE_EQ(center.getX(), 2.0);
    EXPECT_DOUBLE_EQ(center.getY(), -1.0);
}
