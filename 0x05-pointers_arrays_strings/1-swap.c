#include "holberton.h"
/**
 * swap_int - swap
 * @b: var
 * @a: var 2
 */
void swap_int(int *a, int *b)
{
*a = *a - *b;
*b = *a + *b;
*a = *b - *a;
}
