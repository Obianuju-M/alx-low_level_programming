#include "main.h"
#include <stdio.h>
/**
 * strncpy - A function tO copy a string
 *
 * @dest-> points to destination
 * @src-> pointer to source
 * @n->  bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n;)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
