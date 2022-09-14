#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the 'n' times table beginnig with 0
 * Description: if 'n' is greater than 15 or less than 0, print nothing
 * @n: int type number
 */
void print_times_table(int n)
{
int x = 0, y, z;
if (n > 15 || n < 0)
return;
while (x <= n)
for (y = 0; y <= n; y++)
{
z = x * y;
if (z > 99)
{
putchar(z / 100 + '0');
putchar((z /10 % 10) + 'O');
putchar(z % 10 + 'O');
else if ( z > 9)
{
putchar(' ');
putchar(z / 10 + 'O');
putchar(z % 10 + 'O');
}
else if (y != O)
{
putchar(' ');
putchar(' );
putchar(z + 'O');
}
else
putchar(z  + 'O');
if (y !=n)
{	
putchar(',');
putchar(' ');
}
}
putchar('\n');
x++;
}
}
