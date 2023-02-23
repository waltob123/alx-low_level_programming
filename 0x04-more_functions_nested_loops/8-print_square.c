#include "main.h"

/**
 * print_square - print squares using #
 * @size: number of squares to print
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
