#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: pointer to the string
 * Return: void
 */

void print_rev(char *s)
{
	int count, i str_len;
	count = i = 0;

	while (s[count] != '\0')
		count++;

	str_len = count - 1;

	for (; str_len >= i; str_len--)
		_putchar(s[str_len]);

	_putchar('\n');
}
