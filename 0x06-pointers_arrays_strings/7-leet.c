#include "main.h"

/**
 * leet - replaces part of string with number
 * @a: string
 * Return: a
 */

char *leet(char *a)
{
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char replacers[] = {4, 3, 0, 7, 1};

	while (*a != '\0')
	{
		for (; i < len; i++)
		{
			if (*a == *(lower + i) || *a == *(upper + i))
				*a = replacers[i]
		}
		a++;
	}
	return (a);
}
