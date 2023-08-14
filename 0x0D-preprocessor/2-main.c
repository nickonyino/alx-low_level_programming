#include <stdio.h>
#include <stdlib.h>
/**
* main - prints name of file it is compilied from
* in a new line
* Return: always 0
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
