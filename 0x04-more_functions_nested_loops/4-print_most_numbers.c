#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers -function that prints numbers 0 to 9 .
 * Return: void
 */
void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (!(i == 50) && !(i == 52))
{
putchar(i);
		}
}
putchar(10);
}
