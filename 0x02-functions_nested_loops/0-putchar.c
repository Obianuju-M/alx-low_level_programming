#include "main.h"
/**
 * main-> Entry point
 * Description: prints the string '_putchar on a new line'
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_*putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
	return (0);
}
