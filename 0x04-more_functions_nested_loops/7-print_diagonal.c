#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: number of times to print
 */

void print_diagonal(int n)
{
	int i;

	i = 1;

	while (i <= n)
	{

		for (; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		i++;
	}
	_putchar('\n');
}
