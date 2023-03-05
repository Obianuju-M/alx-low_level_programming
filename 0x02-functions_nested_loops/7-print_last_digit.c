#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @r: Number to be checked by the function
 * Return: Returns the last digit of r
 */

int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
		last_digit = (r % 10) * -1;
	else
		last_digit = r % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
