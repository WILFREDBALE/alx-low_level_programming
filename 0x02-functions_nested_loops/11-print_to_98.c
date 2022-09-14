#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -this prints all natural number from n to 98
 * seperated by comma and space
 * @n: represents the number from which counting begins
 * Return: 0 or 1
 */
void print_to_98(int n)
{
while (n > 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%i, ", n);
n--;
}
printf("98");
putchar('\n');

}
