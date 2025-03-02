#include<stdio.h>
int findFact(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}
	return fact;
}
int findSquare(int num) {
	return num * num;
}