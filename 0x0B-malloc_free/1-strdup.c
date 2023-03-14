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
	int len = i = 0;

	while (str++ != '\0')
		len++;

	ch = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);
	if (ch == NULL)
		return (NULL);

	for (; i <= len; i++)
		ch[i] = str[i];

	return (ch);
}
