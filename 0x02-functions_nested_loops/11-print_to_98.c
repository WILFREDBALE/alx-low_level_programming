#include "main.h"
/**
 * print_to_98 -this prints all natural number from n to 98
 * seperated by comma and space
 * @n: represents the number from which counting begins
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d,", n+=);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
