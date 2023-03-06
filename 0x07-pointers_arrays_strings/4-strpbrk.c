#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string pointer
 * @accept: bytes
 * Return: pointer to first bytes match.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
				return (&s[j]);
		}
	}
	return (0);
}
