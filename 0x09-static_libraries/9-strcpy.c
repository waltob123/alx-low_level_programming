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
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
