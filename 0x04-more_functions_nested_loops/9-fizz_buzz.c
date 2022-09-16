#include "main.h"
#include <stdio.h>

/**
 * main - program that prints either number 
 * or fizz or buzz or fizzBuzz
 * Return: 0
 */
int main(void)
{
int num = 1;
while (num < 101)
{
if ((num % 3 == 0) && (num % 5 == 0))
{
printf("%s", "FizzBuzz");
}
else if ((num % 3) == 0)
{
printf("%s", "Fizz");
}
else if ((num % 5) == 0)
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




