#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int Summation(int, int, int);
int Sequences(int, int, int);

int main(void) {


	int userChoice;
	
	
	int num1;
	int num2; 
	int num3;
	
	bool isRunning = true;

	do {
		printf("Please, select a choie:\n1. Summation.\n2. Sequences.\n3. Exit the program.\n\n");
		scanf_s("%d", &userChoice);
		switch (userChoice) {
		case 1:
			printf("Enter three numbers (ints), no commas, one space: ");
			scanf_s("%d %d %d", &num1, &num2, &num3);
			Summation(num1, num2, num3);
			break;

		case 2:
			printf("Enter three numbers (ints), no commas, one space: ");
			scanf_s("%d %d %d", &num1, &num2, &num3);
			Sequences(num1, num2, num3);
			break;
		case 3:
			printf("Program has been terminated.");
			isRunning = false;
			//exit(1);
			break;
		default:
			printf("Invalid entry.");
		}

	} while (isRunning == true);
	


	return 0;
}

int Summation(int a, int b, int c) {




	return 0;

}

int Sequences(int a, int b, int c) {



	return 0;

}