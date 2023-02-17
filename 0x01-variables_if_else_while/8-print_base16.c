#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');

	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
