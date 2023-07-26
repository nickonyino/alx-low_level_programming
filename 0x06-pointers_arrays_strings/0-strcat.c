#include"main.h"
#include<stdio.h>

/**
* _strcat - a function that concatenates two strings
* @dest - input value
* @src - input value
* Return: m
*/

char *_strcat(char *dest, char *src);
{
	char *temp = dest;

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
	return temp;
}
