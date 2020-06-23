#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print tab
 * @a: aaaa
 * @n: bbbb
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n  ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
