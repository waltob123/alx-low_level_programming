#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 */

void more_numbers(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}

			_putchar(j % 10 + '0');
		}

		i++;
		_putchar('\n');
	}
}
