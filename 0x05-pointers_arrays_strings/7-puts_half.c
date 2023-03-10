#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: pointer to string.
 */
void puts_half(char *str)
{
	int i, len, j;

	i = len = 0;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
		j = len / 2;

	else
		j = (len + 1) / 2;

	for (i = j; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
