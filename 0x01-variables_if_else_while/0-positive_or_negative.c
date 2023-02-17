#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is determining whether n is a positve, negative or zero.
 *return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)	
		printf("%d: is positive\n", n);
	else if(n==0)
		printf("%d: zero\n", n);
	else(n<0)
		printf("%d: is negative\n, n");
	return (0);
}
