#include "holberton.h"
/**
* main- display alphabet
*
* Return: 0
**/
int main(void)
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
