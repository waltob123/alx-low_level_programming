#include "main.h"

/**
 * _islower - checks if argument is lowercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
