#include <stdio.h>
/**
 */
void _puts_recursion(char *s)
{
	*s = "Puts";
	printf('\n');

	_puts_recursion(*s);
}
