#include <stdio.h>
#include <stdbool.h>

#define LOOP_ITERATOR		0		// Used for controlling iterations inside our loop.



int main(void) {

	// Initializing variables and asking for input.

	size_t yearOne, yearTwo;
	int remainder1, remainder2;



	printf("Enter two years, separated by a space and without any commas: ");
	scanf_s("%zd %zd", &yearOne, &yearTwo);

	// Initializing our while loop and printing leap years.

	while (yearOne < yearTwo) {

		remainder1 = yearOne % 4;

		




	}







	return 0;
}