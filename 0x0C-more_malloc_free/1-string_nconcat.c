#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string1
 * @s2: string2
 * @n: size
 * Return: NULL or pointer to concatenated string

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len, i;

	len = n;
	i = j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);

	while (s1[i] != '\0')
	{
		i++;
		len++;
	}

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (; s1[i]; i++)
		ptr[len++] = s1[i];

	for (i = 0; s2[index] && index < n; index++)
		ptr[len++] = s2[index];

	ptr[len] = '\0';

	return (ptr);
}
