#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - this function copies a string including
 * the terminating null byte by using n number of bytes inputted
 * the remainder of the destination string is filled with null bytes
 * if the length of the source string is less than the maximum byte number.
 * @dest: buffer that stores the string copy
 * @src: source string
 * @n: maximum number of bytes copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; a < n && src[a] != '\0'; a++)
dest[a] = scr[a];
for (a = 0; a < n; a++)
dest[a] = '\0';
return (dest);

}
