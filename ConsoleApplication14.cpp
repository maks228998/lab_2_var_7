#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include "my_lib.h"

int main() {
	printf("Calculating factorial\n");
	int n = input_int_number();
	int factorial = 1;

	for (int counter = 1; counter <= n; counter++) {
		factorial = factorial * counter;
	}

	printf("Calculated factorial: %d", factorial);
}