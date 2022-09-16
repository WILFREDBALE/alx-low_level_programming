#include "main.h"
#include <stdio.h>

/**
 * print_square - prints squares
 * @n: number of lines using '#' character
 * Return: return nothing
 */
void print_square(int n)
{
int a, b;
for (b = 0; b < n; b++)
{
for (a = 0; a < n; a++)
{
putchar('#');
}
putchar('\n');
}
if (n <= 0)
{
putchar('\n');
}
}
