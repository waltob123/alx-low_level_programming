#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to standard output
 * @s: pointer to string
 * Return: void
 */

void _puts(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
	_putchar('\n');
}
