#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int counter;
	int number_of_times;
	char ch;

	number_of_times = 10;

	for (counter = 0; counter < 10; counter++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n')
	}
}
