#include <stdio.h>

/*

if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");


The statement is legal but the implementation is wrong because if n = 0, it will
evaluate to true even though 0 is not between 1 and 10.

solution:

if (n >= 1 && n <= 10)
        printf("n is between 1 and 10\n");
*/
