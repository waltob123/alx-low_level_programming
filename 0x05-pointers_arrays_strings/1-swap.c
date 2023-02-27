#include "main.h"

/**
 * swap_int - Swaps the value of two pointers
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp_storage;

	temp_storage = *a;
	*a = *b;
	*b = temp_storage;
}
