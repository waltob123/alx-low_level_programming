#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string.
 * Return: len.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
