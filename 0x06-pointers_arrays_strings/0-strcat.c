#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to src
 * @src: string to be concatenated upon
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int a = 0;
int b= 0;
while (dest[a++])
b++;
for (a = 0; src[a]; a++)
dest[b++] = src[a];
return (dest);

}
