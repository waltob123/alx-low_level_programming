#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase
 *
 * This function prints all the alphabets n lowercase
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
