#include "main.h"

/**
 *  _strlen_recursion -  returns the length of a string
 *
 *  @s - string to return
 *
 *  Return: 0 Always
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
