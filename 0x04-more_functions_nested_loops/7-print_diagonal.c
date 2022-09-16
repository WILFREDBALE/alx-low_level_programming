#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - prints diagonal line
 *@n: number of lines using '\' character
 *Return: returns nothing
 */

void print_diagonal(int n)

{
int a, b;
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
if (n <= 0)
{
putchar('\n');
}
