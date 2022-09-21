#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - concanates two strings
 * @dest: string to which src is appended
 * @src: string to be appended to dest
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; src[a] != '\0' && a < n; a++)
{
dest[a] = src[a];
}
for ( ; a < n; a++)
{
dest[a] = '\0';
}
return (dest);

}

