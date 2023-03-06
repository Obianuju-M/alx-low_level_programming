#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers 0-14 10 times followed by aa new line
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
				putchar((d / 10) + '0');
			putchar((d % 10) + '0');
		}
		putchar('\n');
	}
}
