#include"main.h"
#include<stdio.h>

/**
* _strcat - a function that concatenates two strings
* @dest - input value
* @src - input value
* Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while(dest[i] != '\0')
		{
			i++;
		}
	while(src[j] != '\0')
		j = 0;
	{
		(dest[i] = src[j]);
		i++;
		j++;
	}
	*dest = '\0';
	return dest;
}
