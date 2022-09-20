#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse order
 * @s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
int len = strlen(s);
while (len--)
putchar(*(s + len));
putchar(10);
}
