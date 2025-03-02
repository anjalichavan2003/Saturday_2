/*
	* * * * *
	*       *
	*       *
	*	    *
	*	    * 
	* * * * *
*/

#include<stdio.h>
int main() {
	int n=5;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if ( j==0|| i == 0 || j == n || i == n) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}