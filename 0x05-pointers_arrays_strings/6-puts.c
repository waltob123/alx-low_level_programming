#include "main.h"

/**
 * puts2 - Prints one character out of two of a string.
 * @str: Pointer to string.
 */

void puts2(char *str)
{
	int i, len;
	i = len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
