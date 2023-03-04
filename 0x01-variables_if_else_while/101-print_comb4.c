#include <stdio.c>
/**
 * main-> Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	int d;
	int e;

	while (c <= 9)
	{
		d = 0;
		while (d <= 9)
		{
			e = 0;
			while (e <= 9)
			{
				if (c != d && c < d && d != e && d < e)
				{
					putchar(c + 48);
					putchar(d + 48);
					putchar(e + 48);
					if (c + d + e != 24)
					{
						putchar (',');
						putchar(' ');
					}
				}
				++e;
			}
			++d;
		}
		++c;
		putchar('\n');
		return (0);
	}
