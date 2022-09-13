#include <stdio.h>
/**
 * _islower - this function checks for lowercase characters
 * &: this int is used for the argument of the function
 * Return: 0
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
