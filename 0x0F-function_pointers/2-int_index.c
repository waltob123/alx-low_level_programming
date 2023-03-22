#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: array size
 * @cmp: pointer to function
 * Return: 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if ((cmp(array[i])) != 0)
			return (i);
		}
	}
	return (-1);
}
