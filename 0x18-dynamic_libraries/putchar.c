#include "main.h"

/**
 *_putchar - write character
 *@char c - character to be written 
 *Return - 0 on success
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
