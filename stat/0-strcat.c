#include"holberton.h"
/**
 * _strcat - concatinates two strings.
 * @dest: ptr
 * @src: ptr
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
int a, b;
b = 0;
while (dest[b] != '\0')
b++;
a = 0;
while (src[a] != '\0')
{
*(dest + b) = *(src + a);
a++;
b++;
}
return (dest);
}
