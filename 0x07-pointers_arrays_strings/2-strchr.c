#include "main.h"

/**
 * _strchr - finds a character in a string.
 * @s: string
 * @c: character
 * Return: s or 0
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
		return (s);
		}
	}
	if (c  == '\0')
	{
		return (s);
	}
	return (0);
}
