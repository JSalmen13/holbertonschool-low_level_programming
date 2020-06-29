#include "holberton.h"
/**
 * _memset - set memory
 * @s: str
 * @b: char
 * @n: ui
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	s[cnt] = b;
	return (s);
}
