/*
* Exercise 5:
* 
* Suppose that we call scanf as follows:
*		scanf("%f%d%f", &x, &i, &y);
* if the user enters:
*		12.3 45.6 789
* what will be the values of x, i & y after the call? (Assume that x & y are float variables
* & i is an int variable.)
*/

#include <stdio.h>

int main() {
	float x;
	int i;
	float y;

	scanf_s("%f%d%f", &x, &i, &y);

	return 0;
}