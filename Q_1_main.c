/* Write a menu driven program to perform the gollowing : 
	1. Find Factorial
	2. Find square
	3. Exit 
*/
#include<stdio.h>
#include"function.h"
int main() {
		int choice;
		printf("\n1.Find Factorial \n2.Find Square \n3.Exit\n");
		printf("\nEnter your choice : ");
		scanf_s("%d", &choice);
		/*
		while (choice < 1 || choice > 3) {
			printf("Re-Enter your choice : ");
			scanf_s("%d", &choice);
		}
		*/

		switch (choice) {
			int num;
		case 1:
			printf("\nEnter your number : ");
			scanf_s("%d", &num);
			printf("%d", findFact(num));
			break;

		case 2:printf("\nEnter your number : ");
			scanf_s("%d", &num);
			printf("%d", findSquare(num));
			break;

		case 3:exit(0);
			break;
		default:
			printf("\nInvalid choice!!");
		
	    }
	return 0;
}