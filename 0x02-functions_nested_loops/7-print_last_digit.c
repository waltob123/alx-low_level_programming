#include <stdio.h>

/**
 * print_last_digit - prints the last digit of n
 *
 * @n: number to print last digit of
 *
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
