#include "main.h"
/**
 * main-> Entry point
 * Description: prints the string '_putchar on a new line'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "_putchar";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}

