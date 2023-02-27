#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: pointer to string
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	for (; count < _strlen(str); count++)
		_putchar(str[count]);

	_putchar('\n');
}
