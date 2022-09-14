#include <stdio.h>
/**
 * _islower - function checks for lowercase characters
 * &: this is the int to be used for the argument of the function
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
