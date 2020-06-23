#include "holberton.h"
/**
 * rev_string - aaaa
 * 
 * @s: aaaa
 * 
 */
void rev_string(char *s)
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
		_putchar(p[i]);
	}
	_putchar('\n');
}
