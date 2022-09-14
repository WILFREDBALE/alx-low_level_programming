#include "main.h"
/**
 * times_table - prints the 9 timestable, starting with 0.
 */
void times_table(void)
{
	int num, mult, product; 

	for (num = 0; num <= 9; num = num + 1)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
	{
		_putchar(',');
	        _putchar(' ');

		product = num * mult;
		if (product <= 9)
			_putchar(' ');
		else
			_putchar((product / 10) + '0');
	      _putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
}
