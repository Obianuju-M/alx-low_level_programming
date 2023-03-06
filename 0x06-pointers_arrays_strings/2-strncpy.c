#include "main.h"
#include <stdio.h>
/**
 * strncpy - A function to copy a string
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

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
