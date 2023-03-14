#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character
 * Return: NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
