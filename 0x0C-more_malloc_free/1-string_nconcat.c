#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string1
 * @s2: string2
 * @n: size
 * Return: NULL or pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		ptr[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		ptr[len++] = s2[index];

	ptr[len] = '\0';

	return (ptr);
}
