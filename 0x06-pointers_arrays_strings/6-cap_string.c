#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: pointer
 * Return: capitalised string
 */

char *cap_string(char *str)
{
char sep[] = ",\t;\n; .!?\"(){}";
int flag, i, ii;
for (i = o; str[i] != '\0'; i++)
{
flag = 0;
if (i == 0)
{
flag = 1;
}
else
{
for (ii = o; sep[ii] != '\0'; ii++)
{
if (str[i - 1] == sep[ii])
{
flag = 1;
break;
}
}
}
if (flag == 1)
{
if (str[i] <= 'z' && str[i] >= 'a')
{
str[i] -= ('a' - 'A');
}
}
}
return (str);

}
