#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
