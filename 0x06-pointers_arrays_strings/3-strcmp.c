#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1:  string 1
 * @s2:  string 2
 * Return: num
 */
int _strcmp(char *s1, char *s2)
{
	int counter, num;

	num = 0;

	for (counter = 0; s1[counter] != '\0' && s2[counter] != '\0'; counter++)
	{
		if (s1[counter] != s2[counter])
		{
			num = s1[counter] - s2[counter];
			break;
		}
	}
	return (num);
}