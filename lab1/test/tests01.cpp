#include <gtest/gtest.h>
#include "../include/countUnits.h"

TEST(test_01, basic_test_set) {
    ASSERT_TRUE(countUnits(2, 7) == 11);
}

TEST(test_02, basic_test_set) {
    ASSERT_TRUE(countUnits(14, 101) == 298);
}

TEST(test_03, basic_test_set) {
    ASSERT_TRUE(countUnits(0, 200) == 735);
}

TEST(test_04, basic_test_set) {
    ASSERT_TRUE(countUnits(2, 1) == 0);
}

TEST(test_05, basic_test_set) {
    ASSERT_TRUE(countUnits(5, 5) == 2);
}
