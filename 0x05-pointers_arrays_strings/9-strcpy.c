#include "holberton.h"
/**
 * _strcpy - cp 
 * @dest: aaaa
 * @src: bbbb
 * Return: On success 1.
 */
char *_strcpy(char *dest, char *src)
{
	int a, length;

	length = 0;
	while (src[length] != '\0')
	{
	length++;
	}


	for (a = 0; a <= length; a++)
	{
		dest[a] = src[a];
	}

return (dest);
}
