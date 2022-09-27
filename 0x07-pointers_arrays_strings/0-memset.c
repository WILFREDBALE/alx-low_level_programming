#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n-1] = b;
n--;
}
return (s);

}
