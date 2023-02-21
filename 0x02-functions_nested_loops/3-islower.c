#include "main.h"

/**
 * _islower - checks if argument is lowercase
 *
 * @c: argument to check if is lower or upper
 *
 * Return: 0 (Succes) 1 (Error)
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
