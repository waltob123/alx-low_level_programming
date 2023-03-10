#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i, cents, coins, value[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5;)
		{
			if (cents >= value[i])
			{
				cents = cents - value[i];
				coins = coins + 1;
			}
			if (cents < value[i])
				i++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
