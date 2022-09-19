#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string as integer
 */

int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
	len++;
return (len);

}
