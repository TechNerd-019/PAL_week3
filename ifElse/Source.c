#include <stdio.h>


int main(void) {

	int whatever;
	int whatever2;
	printf("Enter 2 nums: ");
	scanf_s("%d %d", &whatever, &whatever2);


	if (whatever == 1 && whatever2 == 3) {
		printf("You're awesome!\n");

		// && is used for appending a condition to another condition within an if statement.
		// || is used to choose between one of the conditions for validations within an if statement.

	}
	/*else if (whatever == 3) {
		printf("Outstanding!\n");
	}*/
	else {
		printf("You're bad!\n");
	}


	return 0;
}
