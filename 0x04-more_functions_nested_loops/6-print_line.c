#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: parameter
 * Return: nothing
 */

void print_line(int n)
{
while (n-- > 0)
{
putchar('_');
}
putchar('\n');
}
