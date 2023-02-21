#include "main.h"

/**
 * _abs - returns the absolute form of a number
 *
 * @n: number to convert
 *
 * Return: n (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = 0 - n;
	return (n);
}
