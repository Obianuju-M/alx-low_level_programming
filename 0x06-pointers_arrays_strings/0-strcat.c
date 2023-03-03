#include "main.h"
/**
 * strcat -> Concatenates the string pointed to by @src
 * @dest -> Points to the string to concatenated
 * @src -> String pointed to by @dest
 *
 * Return -> Points to the destination of string @dest
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
