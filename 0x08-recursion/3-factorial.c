#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to find factorial of
 * Return: result
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
