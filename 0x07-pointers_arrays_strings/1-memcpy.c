#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: destination str
 * @src: source str
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;
for (i = 0; i < n; i++)
*(dest + i) = *(src + i);
return (dest);

}
