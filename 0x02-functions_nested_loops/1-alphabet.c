#include "holberton.h"
/**
* print_alphabet - display alphabet
*
* Return: 1
**/
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
