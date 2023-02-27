#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
