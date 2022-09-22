#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: b
 */

int _strcmp(char *s1, char *s2)
{
int a = 0;
int b = 0;
while (1)
{
if (s1[a] =='\0' && s2[a] == '\0')
break;
else if (s1[a] == '\0')
{
b = s2[a];
break;
}
else if (s1[a] != s2[a])
{
b = s1[a] -s2[a];
break;
}
else
i++;
}
return (b);

}
