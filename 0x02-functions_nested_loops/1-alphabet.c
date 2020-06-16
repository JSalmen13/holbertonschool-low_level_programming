#include "holberton.h"
/**
* print_alphabet - display alphabet
*
* Return: 0
**/
void print_alphabet(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		_putchar(A);
		A++;
	}
	_putchar('\n');
	return (0);
}
