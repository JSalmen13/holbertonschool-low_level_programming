#include "holberton.h"
/**
* print_line- prints line of _
* @n: var
* Return: 0
**/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	_putchar('_');
	_putchar('\n');
}
