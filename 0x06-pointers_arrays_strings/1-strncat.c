#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: bytes
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
    int dest_i, src_j;

    dest_i = src_j = 0;

    while (dest[dest_i] != '\0')
    {
        dest_i++;
    }

    while (src[src_j] != '\0' && src_j < n)
    {
        dest[dest_i] = src[src_j];
        dest_i++;
        src_j++;
    }

    dest[dest_i] = '\0';

    return (dest);
}