#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a strings
 * @str: string
 * Description: prints a string
 * on sucess: return no error
 */

void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));
	i++;
}
putchar(10);
}
