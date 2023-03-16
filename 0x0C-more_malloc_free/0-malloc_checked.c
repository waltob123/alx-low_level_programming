#include <stdlib>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: pointer to allocated space or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
