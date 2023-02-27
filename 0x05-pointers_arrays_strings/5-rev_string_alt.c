#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
	int count, i, str_len, loop_times;
	char t;

	count = i = 0;

	while (s[count] != '\0')
		count++;

	str_len = count - 1;

	if (str_len % 2 == 0)
		loop_times = (str_len / 2) - 1;
	else
		loop_times = (str_len / 2) + 1;

	for (; i < loop_times; i++)
	{
		t = s[i];
		s[i] = s[str_len];
		s[str_len] = t;
		loop_times--;
		str_len--;
	}
}
