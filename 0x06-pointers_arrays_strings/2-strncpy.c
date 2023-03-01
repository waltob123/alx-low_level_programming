#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string to copy
 * @dest: destination string
 * @n: bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_i = 0;

	while (dest_i < n && src[dest_i] != '\0')
	{
		dest[dest_i] = src[dest_i];
		dest_i++;
	}

	if (dest_i < n)
	{
		for (; dest_i < n; dest_i++)

		dest[dest_i] = '\0';
	}
	return (dest);
}