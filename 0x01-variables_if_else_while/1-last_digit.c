#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * prints the last digit of n
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit;

	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	if (last_digit < 6 && last_digit > -1)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0);
	}
	return (0);
}
