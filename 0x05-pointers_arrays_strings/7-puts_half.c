#include "holberton.h"
/**
 * puts_half - print 2nd half
 * @str: string
 */
void puts_half(char *str)
{
	int n, i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (n = i / 2 ; str[n] != '\0' ; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = ((i / 2) + 1) ; str[n] != '\0' ; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
