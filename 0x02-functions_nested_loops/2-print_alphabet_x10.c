#include <stdio.h>
/**
 * void print_alphabet_x10(void) - prints alphabets abc ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
char q, r;
for  (r = 0; r <= 9; r = r + 1)
{
for (q = 'a'; q <= 'z'; q = q + 1)
{
putchar(q);
}
putchar('\n');
}
}

