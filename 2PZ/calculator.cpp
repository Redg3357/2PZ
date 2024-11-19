#include "calculator.h"

namespace operations {

	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	int multiply(int a, int b) { return a * b; }
	int divide(int a, int b) { return (b != 0) ? a / b : 0; }
	int dec_xor(int a, int b) { return a ^ b; }
	//some changes
}