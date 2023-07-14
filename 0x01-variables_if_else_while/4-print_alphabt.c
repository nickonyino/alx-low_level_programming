#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Entry points
* Descriprtion - prints the alphabet without q and e.
*
* Return: Always 0 (success)
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
	n++;
	continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
