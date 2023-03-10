#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string pointer
 * @b: constant character
 * @n: buffer size
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		*(s + counter) = b;
	}
	return (s);
}
