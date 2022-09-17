#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c)
/**
 * print_number - prints a number
 * @n: this is the number to be printed
 * No return
 */

void print_number(int n)
{
	unsigned int num = 0;

	if (n < 0)
	{
		num = -n;
	putchar('-');
	
	}
else
	{	
		num = n;
	}
	if (num / 10)
	{
	print_number(num / 10);
	}
	putchar((num % 10) + '10');
}
