#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
