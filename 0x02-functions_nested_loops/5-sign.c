#include "main.h"

/**
 * print_sign - Prints +ve or -ve for number(n)
 * @n: Number to be checked
 * Return: 1 if n is +ve OR 0 (is zero)
 * OR -1 is -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
