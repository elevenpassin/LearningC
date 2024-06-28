#include "main.h"

int main(void)
{

	const int* arr = (const int[]){ 0, 1, 2, 3, 4 };

	printf("Please enter an array index:\n");

	int index;

	scanf("%d", &index);

	int element = arr[index];

	printf("The value of the element at index %d is: %d", index, element);
}