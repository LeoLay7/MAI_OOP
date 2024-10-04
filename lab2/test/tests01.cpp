#include <gtest/gtest.h>
#include "../include/Decimal.hpp"

TEST(DecimalTest, ConstructorAndPrint) {
    Decimal var1("12345");
    std::stringstream ss;
    var1.print(ss);
    ASSERT_EQ(ss.str(), "12345");
}

TEST(DecimalTest, Addition) {
    Decimal var1("12345");
    Decimal var2("54321");
    Decimal expected("66666");

    var1 += var2;
    ASSERT_EQ(var1, expected);
}

TEST(DecimalTest, Subtraction) {
    Decimal var1("54321");
    Decimal var2("12345");
    Decimal expected("41976");

    var1 -= var2;
    ASSERT_EQ(var1, expected);
}

TEST(DecimalTest, AdditionWithCarry) {
    Decimal var1("999");
    Decimal var2("1");
    Decimal expected("1000");

    var1 += var2;
    ASSERT_EQ(var1, expected);
}

TEST(DecimalTest, SubtractionWithBorrow) {
    Decimal var1("1000");
    Decimal var2("1");
    Decimal expected("999");

    var1 -= var2;
    ASSERT_EQ(var1, expected);
}

TEST(DecimalTest, Equality) {
    Decimal var1("12345");
    Decimal var2("12345");

    ASSERT_TRUE(var1 == var2);
    ASSERT_FALSE(var1 != var2);
}

TEST(DecimalTest, Comparison) {
    Decimal var1("12345");
    Decimal var2("54321");

    ASSERT_TRUE(var1 < var2);
    ASSERT_FALSE(var1 > var2);
}

TEST(DecimalTest, LeadingZeros) {
    Decimal var("000123");
    std::stringstream ss;
    var.print(ss);
    ASSERT_EQ(ss.str(), "123");
}

TEST(DecimalTest, Assignment) {
    Decimal var1("12345");
    Decimal var2 = var1;
    Decimal var3 = std::move(var1);

    std::stringstream ss;
    var2.print(ss);
    ASSERT_EQ(ss.str(), "12345");

    ss.str("");
    var3.print(ss);
    ASSERT_EQ(ss.str(), "12345");
}

TEST(DecimalTest, AdditionSubtractionDifferentLengths) {
    Decimal var1("9999");
    Decimal var2("1");
    Decimal expected_add("10000");
    Decimal expected_sub("9999");

    var1 += var2;
    ASSERT_EQ(var1, expected_add);

    var1 -= var2;
    ASSERT_EQ(var1, expected_sub);
}

TEST(DecimalTest, LargeNumbers) {
    Decimal var1("99999999999999999999");
    Decimal var2("1");
    Decimal expected("100000000000000000000");

    var1 += var2;
    ASSERT_EQ(var1, expected);
}
