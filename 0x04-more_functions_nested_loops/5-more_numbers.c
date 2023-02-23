#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		for (; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
