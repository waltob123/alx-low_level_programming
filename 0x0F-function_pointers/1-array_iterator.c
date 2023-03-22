#include "function_pointers.h"

/**
 * array_iterator - print an array
 * @array: elements of array
 * @size: array size
 * @action: action to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
