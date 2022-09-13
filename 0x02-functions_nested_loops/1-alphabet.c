#include <stdio.h>
/**
 * print_alphabet - this function prints alphabets abc
 * Return: 0
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c = c + 1)
{
putchar(c);
}
putchar('\n');
}
