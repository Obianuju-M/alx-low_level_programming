#include "main.h"
#include <stdio.h>
/**
 * strcat - a function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source code
 *
 * Return: @dest
*/

char *_strcat(char *dest, char *src)
{
	int d;
	int d1;

	d = 0;	

	while (dest[d])
		d++;

	for (d1 = 0; src[d1]; d1++)
		dest[d++] = src[d1];

	return (dest);
}
