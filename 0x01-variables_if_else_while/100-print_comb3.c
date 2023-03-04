#include <stdio.h>
/**
 * main-> Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	int d;

	while (c <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			if (c != d && c < d)
			{
				putchar(c + 48);
				putchar(d + 48);
				if (c + d != 17)
				{
					putchar (',');
					putchar(' ');
				}
			}
			++d;
		}
		++c;
	}
	putchar('\n');
	return (0);
}
