#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
	int count, i, str_len;
	char t;

	count = i = 0;

	while (s[count] != '\0')
		count++;

	str_len = count - 1;

	while (i < str_len)
	{
		t = s[i];
		s[i] = s[str_len];
		s[str_len] = t;
		i++;
		str_len--;
	}
}
