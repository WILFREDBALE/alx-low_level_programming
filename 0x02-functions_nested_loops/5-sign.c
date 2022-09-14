#include <stdio.h>
/**
 * print_sign - function checks for a sign of a number
 * @n: is the int to be used for the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar('o');
return (0);
}

}
