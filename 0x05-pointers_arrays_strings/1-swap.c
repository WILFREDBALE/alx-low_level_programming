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
int tmp = *a;
*a = *b;
*b = tmp;
}
