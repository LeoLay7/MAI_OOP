#include <gtest/gtest.h>
#include "../include/Decimal.hpp"


TEST(test_01, basic_test_set) {
    Decimal var1 = Decimal("20");
    Decimal var2 = Decimal{'2', '0'};
    Decimal var3 = Decimal(5, '2');
    Decimal var4 = var1;
    ASSERT_TRUE(true);
}

TEST(test_02, basic_test_set) {
    Decimal var1 = Decimal("20");
    Decimal var2 = Decimal("30");
    Decimal var3 = var1;

    bool equals = (var1 == var3); // true
    bool not_equals = (var1 != var3); // false
    ASSERT_TRUE(equals);
    ASSERT_FALSE(not_equals);


    bool greater1 = (var1 > var2); // false
    bool greater2 = (var2 > var1); // true
    ASSERT_TRUE(greater1);
    ASSERT_FALSE(greater2);


    bool less1 = (var1 < var2); // true;
    bool less2 = (var2 < var1); // false
    ASSERT_TRUE(less1);
    ASSERT_FALSE(less2);
}

TEST(test_03, basic_test_set) {
    Decimal var1 = Decimal("20");
    Decimal var2 = Decimal("1000");
    Decimal var3 = Decimal("10");
    Decimal add_result = Decimal("1020");
    Decimal remove_result = Decimal("980");

    var1 += var2;
    bool result = (add_result == var1);
    ASSERT_TRUE(result);

    var2 -= var3;
    result = (remove_result == var2);
    ASSERT_TRUE(result);
}