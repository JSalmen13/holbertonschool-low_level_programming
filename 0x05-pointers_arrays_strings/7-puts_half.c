#include "holberton.h"
/**
 * puts_half - orints 2nd half
 * @str: string
 */
void puts_half(char *str)
{
	int length = 0;
	char *cursor;
	cursor = str;
	int j = 0;

	while (*cursor != '\0')
	{
		cursor++;
		length++;
	}
	cursor = str;
	for (j = length / 2; j < length; j++)
	{
	_putchar(cursor[j]);
	}
	_putchar('\n');
}