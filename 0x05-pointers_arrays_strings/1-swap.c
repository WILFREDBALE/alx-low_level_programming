#include <stdio.h>
#include "main.h"

/**
 * swap_int - this prototype function swaps the values of two integers
 * @a: first number
 * @b: second number
 * Return: void
 */

void swap_int( int *a, int *b)
{
int a;
int b;
a = 98;
b = 42;
&a = &b;
&b = &a;
swap_int(&a, @b);
return (0);

}
