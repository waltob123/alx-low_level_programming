#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 or 1.
 */

int main(int argc, char **argv)
{
	int i, j, add = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
