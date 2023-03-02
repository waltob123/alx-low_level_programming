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
	int replacers[] = {'4', '3', '0', '7', '1'};
	int i;
	char *a_ptr = a;

	while (*a != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*a == *(lower + i) || *a == *(upper + i))
				*a = replacers[i];
		}
		a++;
	}
	return (a_ptr);
}
