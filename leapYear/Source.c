#include <stdio.h>

#define REMAINDER_ONE		1


int main(void) {

	// Asking for input.

	int userYear;
	printf("Enter a year: ");
	scanf_s("%d", &userYear);

	int num = userYear % 4;

	// Check if year is divisible by 4.

	if (userYear % 4 == 0) {

		printf("This is a leap year.\n");
	}
	else if (userYear % 4 == 2) {

		printf("This is NOT a leap year.\n");

		int nextLeapYear = userYear + REMAINDER_ONE + REMAINDER_ONE;
		int previousLeapYear = userYear - REMAINDER_ONE - REMAINDER_ONE;

		printf("The previous leap yer is: %d\n", previousLeapYear);
		printf("The next leap yer is: %d\n", nextLeapYear);

	}
	else if (userYear % 4 == 3) {

		printf("This is NOT a leap year.\n");

		int nextLeapYear = userYear + num - REMAINDER_ONE - REMAINDER_ONE;
		int previousLeapYear = userYear - num;

		printf("The previous leap yer is: %d\n", previousLeapYear);
		printf("The next leap yer is: %d\n", nextLeapYear);

	}
	else if (userYear % 4 == 1) {

		printf("This is NOT a leap year.\n");

		int nextLeapYear = userYear + num + REMAINDER_ONE + REMAINDER_ONE;
		int previousLeapYear = userYear - num;

		printf("The previous leap yer is: %d\n", previousLeapYear);
		printf("The next leap yer is: %d\n", nextLeapYear);

	}
	else {

		printf("This is NOT a leap year.\n");

	}

	return 0;
}

// This program will evaluate based on remainders. If the remainder of the number being divided is greater than 0, the computer will
// tell us what the next leap year is based on the sequential numbers until the next remainder being 0.
// Example: remainders of 4: 0, 1, 2, 3, 0 = 4, 5, 6, 7, 8