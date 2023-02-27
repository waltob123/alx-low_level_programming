#include "main.h"

/**
 * _strlen - Checks the number of chars in string
 * @s: pointer to string to check
 * Return: strcount
 */

int _strlen(char *s)
{
	int strcount = 0;

	while (*s[strcount] != '\0')
		strcount++;

	return (strcount);
}
