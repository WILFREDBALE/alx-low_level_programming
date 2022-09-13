#include <stdio.h>
/**
 * main - prints alphabet
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
