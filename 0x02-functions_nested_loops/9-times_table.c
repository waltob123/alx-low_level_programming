#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			res = i * j;

			if (res <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
