#include <stdio.h>
/**
 * main-> Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int c;	
	c = 48;
	while (c <= 102)
	{
		putchar(c);	
		if (c == 57)
			c += 39;
		++c;
	}
	putchar('\n');
	return (0);
}

