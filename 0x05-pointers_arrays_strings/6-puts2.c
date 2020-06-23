#include "holberton.h"
/**
 * puts2 - prints
 *
 * @str: string
 */
void puts2(char *str)
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
	for (j = 0; j <= length; j = j + 2)
	{
	_putchar(cursor[j]);
	}
	_putchar('\n');
}
