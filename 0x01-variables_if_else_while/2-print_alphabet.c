#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 *
 * return: Always 0 (success)
 */
int main(void)
{
	char print_alphabet = 'a';
	for (print_alphabet = 'a', print_alphabet <= 'z', print_alphabet++)
	{
		putchar(print_alphabet);
	}
	Return (0);
}
