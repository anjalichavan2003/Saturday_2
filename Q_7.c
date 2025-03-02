/*
 7] Gennie wants to choose a lucky 4-digit number for her car .
 her lucky numbers are 3 and 5. help her find the number whose 
 sum of the digits is divisible by 3 or 5. write a program to do this.
*/


#include <stdio.h>

int main() {
	printf("Lucky 4-Digit numbers:\n"); // \n use kela format correct sathi

	for (int i = 1000; i <= 9999; i++) {
		int sum = 0, temp = i;

		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}

		if (sum % 3 == 0 || sum % 5 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
