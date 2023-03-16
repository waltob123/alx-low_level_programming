#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int i, d = (max - min) + 1;
	int *ptr = NULL;

	if (min > max)
		return (NULL);

	ptr = malloc(d * sizeof(int));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; (min + i) <= max; i++)
		*(ptr + i) = min + i;
	return (ptr);
}
