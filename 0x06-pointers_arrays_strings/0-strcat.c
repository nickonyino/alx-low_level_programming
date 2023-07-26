#include"main.h"
#include<stdio.h>

/**
* _strcat - a function that concatenates two strings
* Return: m
*/

char *_strcat(char *dest, char *src);
{
	char *m = dest;

	while(*dest)
		{
			dest++;
		}
	while(*src)
	{
		(*dest = *src);
		dest++;
		src++;
	}
	dest = '\0';
	return m;
}
