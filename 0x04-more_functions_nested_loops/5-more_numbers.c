#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers between 0 to 14
 *
 * Return: returns void
 */
void more_numbers(void)
{
int n1, n2;
for (n1 =0; n1 < 10; n1++)
{
n2 = 0;
while (n2 <= 14)
{
if (n2 >= 10)
{
putchar((n2 / 10 + '0');
}
putchar((n2 % 10 + '0');
n2++
}
putchar('\n');
}
}
