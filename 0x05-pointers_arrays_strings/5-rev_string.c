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
		loop_times = str_len - 1;
	else
		loop_times = str_len + 1;

	for (; loop_times >= 0; loop_times--)
	{
		t = s[i];
		s[i] = s[loop_times];
		s[loop_times] = t;
		i++;
	}
}
