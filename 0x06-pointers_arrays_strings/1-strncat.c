#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings by adding n number of characters or bytes * @dest: string to be appended upon
 * @src: string to be appended to dest
 * @n: integer parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a++])
b++;
for (a = 0; src[a] && a < n; a++)
dest[b++] = src[a];
return (dest);

}

