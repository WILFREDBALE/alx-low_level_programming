#include "main.h"
/**
 * times_table - prints the 9 timestable, starting with 0.
 */
void times_table(void)
{
	int num, mult, product;
	for (num = 0; num <=9; num = num + 1)
	{
		putchar('0');
		for (mult = 1; mult <= 9; mult + 1)
	{
		putchat(',');
		putchar(' ');

		prod =num * mult;
		if (prod <= 9)
			putchar(' ');
		else
			putchar((prod / 10) + '0');
		putchar((prod % 10) + '0'):
	}
	putchar('\n');
	}
}
