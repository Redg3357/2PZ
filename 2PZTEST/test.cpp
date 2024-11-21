#include "pch.h"
#include "../2PZ/calculator.cpp"


//! \breif tests for add func

TEST(CalculatorTests, Add) {
    EXPECT_EQ(operations::add(2, 3), 5);
    EXPECT_EQ(operations::add(-1, 1), 0);
}
//! \breif tests for subtract func
TEST(CalculatorTests, Subtract) {
    EXPECT_EQ(operations::subtract(5, 3), 2);
    EXPECT_EQ(operations::subtract(-1, -1), 0);
    EXPECT_EQ(operations::subtract(0, 0), 0);
}
//! \breif tests for multiply func
TEST(CalculatorTests, Multiply) {
    EXPECT_EQ(operations::multiply(4, 3), 12);
    EXPECT_EQ(operations::multiply(-2, 2), -4);
    EXPECT_EQ(operations::multiply(2, 2), 4);
}
//! \breif tests for divide func
TEST(CalculatorTests, Divide) {
    EXPECT_EQ(operations::divide(6, 3), 2);
    EXPECT_EQ(operations::divide(5, 0), 0);
    EXPECT_EQ(operations::divide(-18, 3), -6);
}
//! \breif tests for xor func
TEST(CalculatorTests, Xor) {
    EXPECT_EQ(operations::dec_xor(10, 10), 0);
    EXPECT_EQ(operations::dec_xor(107, 63), 84);
    EXPECT_EQ(operations::dec_xor(11, 10), 1);
    EXPECT_EQ(operations::dec_xor(13, 10), 7);
}