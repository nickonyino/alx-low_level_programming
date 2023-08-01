#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string to search in
 * @accept: set of bytes to search for
 *
 * Return: pointer to the first occurrence that matches one of the
 * bytes in accept, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)

	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return ('\0');
}
