#pragma once

/**
 * @namespace operations
 * @brief Namespace containing basic arithmetic and bitwise operations.
 */
namespace operations {

    /**
     * @brief Adds two integers.
     * @param a The first integer.
     * @param b The second integer.
     * @return The sum of `a` and `b`.
     */
    int add(int a, int b);

    /**
     * @brief Subtracts the second integer from the first.
     * @param a The first integer.
     * @param b The second integer.
     * @return The result of `a - b`.
     */
    int subtract(int a, int b);

    /**
     * @brief Multiplies two integers.
     * @param a The first integer.
     * @param b The second integer.
     * @return The product of `a` and `b`.
     */
    int multiply(int a, int b);

    /**
     * @brief Divides the first integer by the second.
     * @param a The numerator.
     * @param b The denominator. Must not be zero.
     * @return The result of `a / b`.
     * @throws std::invalid_argument if `b` is zero.
     */
    int divide(int a, int b);

    /**
     * @brief Performs a bitwise XOR operation and decrements the result.
     * @param a The first integer.
     * @param b The second integer.
     * @return The result of `(a ^ b) - 1`.
     */
    int dec_xor(int a, int b);
}