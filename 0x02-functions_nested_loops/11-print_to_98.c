#include "main.h"

/**
 * print_to_98 - Prints all whole numbers from n to 98
 *
 * @n: number to start from
 */

void print_to_98(int n)
{
	int stop_point = 98;

	if (n <= stop_point)
	{
		while (n <= stop_point)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	if (n > stop_point)
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
