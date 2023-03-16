#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements.
 * @size: size
 * Return: NULL or pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	filler = ptr;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (ptr);
}
