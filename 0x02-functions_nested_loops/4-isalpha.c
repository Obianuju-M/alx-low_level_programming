#include "main.h"
/**
 *  _isalpha - Checks if xters are alphabets
 * @c: xters that may be alphabets
 * Return: 1 (True - if it contains alphabets) OR 0 (False - no alphabets)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
