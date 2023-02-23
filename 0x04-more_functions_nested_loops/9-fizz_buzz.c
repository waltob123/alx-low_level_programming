#include <stdio.h>

#include "main.h"

/**
 * main - Entry point
 *
 * prints numbers from 1 to 100
 * Return: 0
 */

int main(void)
{
	int i, j;

	j = 100;

	for (i = 1; i <= j; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
