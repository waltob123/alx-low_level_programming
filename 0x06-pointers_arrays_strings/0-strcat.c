#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string being added upon
 * @src: string to add to another
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
    int dest_counter, src_counter;

    dest_counter = src_counter = 0;

    while (dest[dest_counter] != '\0')
    {
        dest_counter++;
    }

    while (src[src_counter] != '\0')
    {
        dest[dest_counter] = src[src_counter];
        dest_counter++;
        src_counter++;
    }

    dest[dest_counter] = '\0';

    return (dest);
}