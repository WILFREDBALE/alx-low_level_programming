#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */
void print_triangle(int size)
{
int a, b, c;
for (a = 0; a < size; a++)
{
for ( c = size -1 - a; c > 0; c--)
{
putchar(' ');
}
for (b = 0; b < a; b++)
{
putchar('#');
}
putchar('\n');
}
if (size <= 0)
{
putchar('\n');
}
}

