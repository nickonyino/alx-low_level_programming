#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry points
* Description - print numbers of base 10 starting from 0 using putchar
* Return: Always 0 (success)
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar (n + 48);
}
putchar ('\n');
return (0);
}
