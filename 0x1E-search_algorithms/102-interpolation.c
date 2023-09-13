#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if array is NULL or target value not found..
  *         index of the value found..
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		index = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (index < size)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			r = index - 1;
		else
			l = index + 1;
	}

	return (-1);
}
