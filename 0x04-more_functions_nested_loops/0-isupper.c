#include "main.h"

/**
 * _isupper - This function checks if the argument passed is an uppercase
 *
 * @c: The argument passed to function
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c < 91))
		return (1);
	else
		return (0);
}
