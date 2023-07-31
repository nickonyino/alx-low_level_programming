#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s - pointed memory area
 * @b - constant byte
 * @n - number of bytes to be filled
 * Return: give array new value of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return s;
}
