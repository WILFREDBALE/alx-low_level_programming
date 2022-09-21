#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: points to char parameter
 * @s2: pointer to char parameter
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
int a;
int b;
a = 0;
while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
{
a++;
}
b = s1[a] -s2[a];
}
return (b);

}
