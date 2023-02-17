#include <stdlib.h>
#include <time.h>

/**
 * main - Determine whether the last digit if a random number is greater than 5, less than 6 and not 0, or is 0.
 * return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(lastDigit > 5)
	       printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if(lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else (lastDigit < 6 !=0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	return (0);
