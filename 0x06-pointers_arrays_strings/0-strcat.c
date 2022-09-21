#include <stdio.h>                                                                                           
#include <string.h>                                                                                          
#include "main.h>                                                                                            
                                                                                                             
/**                                                                                                          
 * *_strcat - this functions concatenates two strings                                                        
 * * @dest: string to which src is appended                                                                    
 * @src: string to be appended to dest                                                                       
 * Return: value of dest                                                                                     
 */                                                                                                         
                                                                                                             
char *_strcat(char *dest, char *src)                                                                         
{                                                                                                            
int a = 0;                                                                                                   
int b = 0;                                                                                                   
while (dest[a] != '\0')                                                                                      
{                                                                                                            
a++;                                                                                                         
}                                                                                                            
while (src[b] != '\0')                                                                                       
{                                                                                                            
dest[a] = src[b];                                                                                            
b++;                                                                                                         
i++;                                                                                                         
}                                                                                                            
dest[a] = '\0'                                                                                               
return (dest);                                                                                               
	                                                                                                             
}                                                                                                            
 
