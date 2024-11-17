#include "pch.h"
#include "../2PZ/calculator.cpp"


TEST(CalculatorTests, Add) {
    EXPECT_EQ(operations::add(2, 3), 5);
    EXPECT_EQ(operations::add(-1, 1), 0);
}

TEST(CalculatorTests, Subtract) {
    EXPECT_EQ(operations::subtract(5, 3), 2);
    EXPECT_EQ(operations::subtract(-1, -1), 0);
}

TEST(CalculatorTests, Multiply) {
    EXPECT_EQ(operations::multiply(4, 3), 12);
    EXPECT_EQ(operations::multiply(-2, 2), -4);
}

TEST(CalculatorTests, Divide) {
    EXPECT_EQ(operations::divide(6, 3), 2);
    EXPECT_EQ(operations::divide(5, 0), 0);  // проверка деления на ноль
}