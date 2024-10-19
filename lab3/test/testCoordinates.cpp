#include <gtest/gtest.h>
#include "../includes/Coordinates.h"

TEST(CoordinatesTest, Initialization) {
    Coordinates point(2.5, -1.5);
    EXPECT_DOUBLE_EQ(point.getX(), 2.5);
    EXPECT_DOUBLE_EQ(point.getY(), -1.5);
}

TEST(CoordinatesTest, Equality) {
    Coordinates p1(1.0, 2.0);
    Coordinates p2(1.0, 2.0);
    EXPECT_TRUE(p1 == p2);
}
