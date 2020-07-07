#include "holberton.h"
/**
 * _memcpy - copy memory
 * @dest: str
 * @src: char
 * @n: ui
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt;

		for (cnt = 0; cnt < n; cnt++)
		dest[cnt] = src[cnt];
	return (dest);
}
