#include "holberton.h"
/**
* print_diagonal - diagonal printing
* @n: var
* Return: 0
**/
void print_diagonal(int n)
{
	int i, j = 0;
	if (n > 0)
	for (i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else 
	_putchar('\n');
}
