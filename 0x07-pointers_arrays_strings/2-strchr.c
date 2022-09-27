#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character
 * @s: string to be searched
 * @c: target
 * Return: pointer to first occurence of c or null if char not found
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (0);

}

