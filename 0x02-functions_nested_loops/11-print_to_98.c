#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all whole numbers from n to 98
 *
 * @n: number to start from
 */

/**void print_to_98(int n)
{
	int stop_point = 98;

	if (n <= stop_point)
	{
		while (n <= stop_point)
		{
			printf("%d", n);
			if (n != stop_point)
				printf(", ");
			else
				printf(" ");
			n++;
		}
	}
	else if (n > stop_point)
	{
		while (n >= stop_point)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
