#include "main.h"
/**
 * _islower-> Function that checks for lower case xters
 * c-> the xter to be checked
 * Return: 1 (True - if cis lower case xters)or 0 (False if c is not lower case)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
