#include <gtest/gtest.h>
#include "../include/countUnits.h"

TEST(test_01, basic_test_set) {
    int a = 2;
    int b = 7;
    int result = countUnits(a, b);
    ASSERT_TRUE(result == 11);
}

TEST(test_02, basic_test_set) {
    int a = 14;
    int b = 101;
    int result = countUnits(a, b);
    ASSERT_TRUE(result == 298);
}

TEST(test_03, basic_test_set) {
    int a = 0;
    int b = 200;
    int result = countUnits(0, 200);
    ASSERT_TRUE(result == 735);
}

TEST(test_04, basic_test_set) {
    int a = 2;
    int b = 1;
    int result = countUnits(2, 1);
    ASSERT_TRUE(result == 0);
}

TEST(test_05, basic_test_set) {
    int a = 5;
    int b = 5;
    int result = countUnits(5, 5);
    ASSERT_TRUE(result == 2);
}
