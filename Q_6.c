/*
6] Raj is given a number and a digit. He has to find the power of 
that number to that digit.help him by writing a program .
if either of the numbers is negative ,print "invalid input".
*/

#include<stdio.h>
int main() {
	int number = -12;
	int digit = 3;
	int mul = 1;

	if (number < 0) {
		printf("Invalid input !!! \n");
		return 0;
	}

	for (int i = 1; i <= digit; i++) {
		mul = mul * number;
	}
	printf("%d", mul);
}