#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	int colon = 58;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(colon);
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
		}
	}
}
