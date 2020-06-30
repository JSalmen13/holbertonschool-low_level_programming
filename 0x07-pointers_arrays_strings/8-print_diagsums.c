#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sum
 * @a: arr
 * @size: int size of 2D arr
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (; i < size; i++)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - 1 - i);
	}
	printf("%i, %i\n", sum1, sum2);
}
