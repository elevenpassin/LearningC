#include <stdio.h>

/*

	Prints output like this:

	_______*
	______*_
	_____*__
	*___*___
	_*_*____
	__*_____

*/

int main(void)
{

	int strPos = 7;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == strPos)
			{
				printf("*");
			}
			else if (i == (6 - 2) && (j == 1)) {
				printf("*");
			}
			else if (i == (6 - 3) && (j == 0))
			{
				printf("*");
			}
			else
			{
				printf("_");
			}
		}
		strPos--;
		printf("\n");
	}

	return 0;
}