#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function that prints number 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
