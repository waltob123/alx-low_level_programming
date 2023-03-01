#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: array size
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, loop_times, arr_len, t;

	arr_len = n - 1;

	loop_times = n / 2;

	for (i = 0; i < loop_times; i++)
	{
		t = a[i];
		a[i] = a[arr_len];
		a[arr_len] = t;
		arr_len--;
	}
}

