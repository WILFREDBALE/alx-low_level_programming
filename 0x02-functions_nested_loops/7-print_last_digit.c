#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int x; 

if (x < 0)
x = -1 * (n % 10);
else
x = n % 10;
putchar(x + '0');
return (x);

}
