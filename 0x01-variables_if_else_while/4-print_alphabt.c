#include <stdio.h>
/**
 * main- Prints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char a;

	a = 'a';
	while
		(a <= 'z') {
			if ((a != 'q' || a != 'e') && a <= 'z')
				putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
