#include "main.h"

/**
 * print_alphabet-> Prints the alphabets a-z on screen
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
