#include "main.h"

/**
 * _isdigit - check if argument is a digit
 *
 * @c: argument to test
 * Return: 1, 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
