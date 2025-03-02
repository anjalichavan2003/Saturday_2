/*
	Find the sum of all even numbers from 1 to 20. Modify the program to accept
	the lower and upper limit from the user.
*/
/*
   //Find the sum of all even numbers from 1 to 20.

   #include<stdio.h>
   int main() {
	int evenSum = 0;
	for (int i = 0; i <= 20; i+=2) {
		evenSum = evenSum + i;
	}
	printf("%d", evenSum);
}
*/

#include<stdio.h>
int main() {
	int lower;
	printf("Enter Lower : \n");
	scanf_s("%d", &lower);

	int upper;
	printf("Enter Upper : \n");
	scanf_s("%d", &upper);

	if (lower % 2 != 0) {
		lower++;
	}
	int evenSum = 0;

	for (int i = lower; i <= upper; i += 2) {
		evenSum = evenSum + i;
	}
	printf("Sum of even numbers from %d to %d: %d\n", lower, upper, evenSum);

	return 0;
}
