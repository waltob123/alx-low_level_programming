#include "main.h"

/**
 * _strcpy - Copies a string @src, including the
 *           terminating null byte, to a buffer @dest.
 * @dest: Pointer to buffer
 * @src: pointer to source string
 *
 * Return: @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}

	return (dest);
}
