#include "main.h"

/**
 * main - Entry point
 * @argc: unused
 * @argv: string
 * Return: string
 */

int main(int argc, char **argv)
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
