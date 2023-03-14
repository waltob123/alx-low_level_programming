#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a string.
 * @str: string.
 * Return: pointer to newly created string
 */

char *_strdup(char *str)
{
	char *ch;
	unsigned int i, j;

	i = j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	ch = (char *)malloc(sizeof(char) * (i + 1));

	if (ch == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ch[j] = str[j];

	return (ch);
}
