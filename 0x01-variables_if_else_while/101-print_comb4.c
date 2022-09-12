#include <stdio.h>
/**
 * main -entry point
 *
 * this code prints all possible combination of two d/t digits
 * in ascending order and separate them using a comma and a space
 *
 * Return: 0 success
 */
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + 'o');
if (digit1 == 7 && digit2 == 8 && digit1 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);  }

