#include "main.h"

/**
 * _isalpha - checks if argument is an alphabet
 *
 * @c: argument to be checked
 *
 * Return: 1 (if c is a letter, lowercase or uppercase) 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (c > 64 && < 91 || c > 96 && c < 123)
		return (1);
	else
		return (0);
}
