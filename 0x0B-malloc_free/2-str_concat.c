#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: pointer to an array of characters
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int i, j, k, limit;

	i = j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	ch = malloc(sizeof(char) * (i + j + 1));

	if (ch == NULL)
	{
		free(ch);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		ch[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		ch[k] = s2[j];

	return (ch);
}
