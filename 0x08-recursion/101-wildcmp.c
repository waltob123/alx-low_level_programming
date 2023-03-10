#include "main.h"

/**
* wildcmp - compares two string
* @s1: first string
* @s2: second string
* Return: 0 or 1
*/

int wildcmp(char *s1, char *s2)
{
	if (s1 == 0 && s2 == 0)
		return (1);
	else if (s1 == 0 || s2 == 0)
		return (0);

	if (*s1 == '\0')
	{
		if (*s2 == 42 && *(s2 + 1) == '\0')
			return (1);
		if (*s1 == *s2)
			return (1);
		else
			return (0);
	}
	if (*s2 == 42)
	{
		if (*(s2 + 1) == 42)
			return (wildcmp(s1, s2 + 1));
		if (*s1 == *(s2 + 1))
		{
			if ((wildcmp(s1, s2 + 1)) == 1)
				return (1);
		}
		return (wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
