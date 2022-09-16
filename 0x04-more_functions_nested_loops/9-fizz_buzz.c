#include "main.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3, Buzz for multiples of 5 and FizzBuzz for both
 * Return: always  0
 */
int main(void)
{
int num = 1;
while (num < 100)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("%s", "FizzBuzz");
}
else if (num % 3 == 0)
{
printf("%s", "Fizz");
}
else if (num % 5 == 0)
{
printf("%s", "Buzz");
}
else
printf("%d", num);
}
if (num != 100)
{
printf(" ");
}
num++;
}
printf("\n");
return (0);
}




