#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: Returns nothing
 */

void print_most_numbers(void)

{
int n;
for (n = 48; n < 58; n++)
{
if ((n == 58) || (n == 52))
{
continue;
}
putchar(n);
}
putchar(10);
}