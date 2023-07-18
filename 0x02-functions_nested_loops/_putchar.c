#include "main.h"
#include <stdout.h>
/**
 * _putchar  - writes the character c to stdout
 * %c -  the character to print
 * Return: on success 1
 * on error , -1 is returned, and an error is set approprietly
 */
int main(char c)
{
	return (write(1, &c, 1));
}


