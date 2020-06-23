#include "holberton.h"
/**
 * print_rev - print in reverse
 * @s: character
 */
void print_rev(char *s)
{
	int i = 0;
	char *p = s;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i--)
	{
		_putchar (p[i]);
	}
	_putchar ('\n');
}
