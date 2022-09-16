#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers between 0 to 14
 *
 * Return: returns void
 */
void more_numbers(void)
{
int a, b;
for (b =0; b < 10; b++)
{
a = 0;
while (a <= 14)
{
if (n2 >= 10)
{
putchar(a / 10 + '0');
}
putchar(a % 10 + '0');
a++;
}
putchar('\n');
}
}
