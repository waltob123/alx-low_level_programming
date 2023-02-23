#include "main.h"

/**
 * print_line - print underscore for a number of times
 * @n: number of times to print
 */

void print_line(int n)
{
	int j = 1;

	while (j <= n)
	{
		_putchar('_');
		j++;
	}
	_putchar('\n');
}
