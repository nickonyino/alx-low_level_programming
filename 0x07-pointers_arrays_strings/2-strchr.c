#include  "main.h"

/**
 * function that locates a character in a string
 *
 * @s: src strings
 * @c: tested char
 *
 * Return: New string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
