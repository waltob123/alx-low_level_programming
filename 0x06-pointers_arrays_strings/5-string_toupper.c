#include "main.h"

/**
 * string_toupper - converts to uppercase
 * @a: string to convert
 * Return: a
*/

char *string_toupper(char *a)
{
	int counter = 0;
	int ans, diff, str_len;

	str_len = 0;

	while (a[str_len] != '\0')
		str_len++;

	for (; counter < str_len; counter++)
	{
		if (a[counter] > 96 && a[counter] < 123)
		{
			diff = a[counter] - 96;
			ans = 64 + diff;
			a[counter] = ans;
		}
		else
		{
			continue;
		}
	}
	return (a);
}

