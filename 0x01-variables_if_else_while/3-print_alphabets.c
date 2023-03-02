#include <stdio.h>
/**
 * main-nprints the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	char b;

	a = "a";
	b = "A";
	while (a <= "z")
	{
		putchar(a);
		a++;
	}
	while (b <= "A")
	{
		putchar(b);
		b++;
	}
	putchar("/n");
	return (0);
}
