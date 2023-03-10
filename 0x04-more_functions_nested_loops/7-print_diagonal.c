#include"main.h"
/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/
void print_diagonal(int n)
{
	int line, spaces;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (line == n - 1)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
