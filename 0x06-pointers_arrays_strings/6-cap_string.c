#include "main.h"

/**
 * cap_string - capitalizes string
 * @a: string to capitalize
 * Return: a
*/

char *cap_string(char *a)
{
	int counter = 0;
	int ans, diff, str_len;

	str_len = 0;

	while (a[str_len] != '\0')
		str_len++;

	for (; counter < str_len; counter++)
	{
		if (a[counter] == ',' || a[counter] == ';' || a[counter] == '.'
		|| a[counter] == '!' || a[counter] == '?' || a[counter] == '"' 
		|| a[counter] == '(' || a[counter] == ')' || a[counter] == '{' 
		|| a[counter] == '}' || a[counter] == ' ' || a[counter] == '\t'
		|| a[counter] == '\n')
		{
			if (a[counter + 1] > 96 && a[counter + 1] < 123)
			{
				diff = a[counter + 1] - 96;
				ans = 64 + diff;
				a[counter + 1] = ans;
			}
			else
			{
				continue;
			}
		}
	}
	return (a);
}

