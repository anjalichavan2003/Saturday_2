
#include<stdio.h>
int main() {
	int number = 120;
	int temp = number;

	if (number <= 0) {
		printf("Input is not valid !! ");
		return 0;
	}
	int i = 2;
	for (i = 2; number > 1;i++) {
		if (number % i == 0) {
			number=number / i;
		}
		else {
			printf("Input number not the exact factorial of any number .");
			return 0;
		}
	}
	printf("%d", i-1);
	return 0;
}