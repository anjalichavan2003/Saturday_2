/*
	A teacher provides his student with a number and a key digit. 
	he wants student to find out many times the key digit occurs in the number. 
	help the student by writing a program.
*/

#include<stdio.h>
int main() {
	int number = 33338933;
	int key = 3;
	int count = 0;

	while (number > 0) {
		int lastDigit=number % 10;
		number = number / 10;
		if (lastDigit == key) {
			count++;
		}
	}
	printf("key =%d\nNumber of occurs =%d ",key, count);
	return 0;
}