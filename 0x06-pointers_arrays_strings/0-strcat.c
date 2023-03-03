#include "main.h"
/**
 * strcat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source code
 *
 * Return: @dest
*/

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
