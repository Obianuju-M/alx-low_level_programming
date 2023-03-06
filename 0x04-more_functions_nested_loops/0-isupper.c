#include "main.h"
#include <stdio.h>
/**
 * _isupper - A functions that checks for uppercasexters
 *@c: The character to be checked
 * Return: 1 (if there is uppercase xters) OR 0 (if no uppercase)
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
