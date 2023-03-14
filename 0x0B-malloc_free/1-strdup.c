#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string and returns a pointer to it
 * @str: string to be duplicated
 * Return: NULL or pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *ch;
	int i, j;

	i = j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	ch = (char *)malloc(sizeof(char) * j + 1);

	if (str == NULL)
		return (NULL);
	if (ch == NULL)
		return (NULL);

	for (; i <= j; i++)
		ch[i] = str[i];

	return (ch);
}
