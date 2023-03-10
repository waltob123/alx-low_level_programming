#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1 if error, else 0.
 */

int main(int argc, char **argv)
{
	int i = 0, j = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", (a * b));
	return (0);
}
