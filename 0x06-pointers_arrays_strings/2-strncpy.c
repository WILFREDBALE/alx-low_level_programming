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
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = scr[i];
for ( ; i < n; a++)
dest[i] = '\0';
return (dest);

}
