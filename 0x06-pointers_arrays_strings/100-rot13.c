#include "main.h"

/**
 * rot13 - encodes a string.
 * @ptr: pointer to array.
 * Return: array.
 */

char *rot13(char *ptr)
{
	int i, j;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ptr[i] != 0; i++)
	{
		for (j = 0; alphabets[j] != 0; j++)
		{
			if (ptr[i] == alphabets[j])
			{
				ptr[i] = new_alpha[j];
				break;
			}
		}
	}
	return (ptr);
}
