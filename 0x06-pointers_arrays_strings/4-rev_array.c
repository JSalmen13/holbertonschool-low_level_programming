#include "holberton.h"
/**
 *reverse_array - reverse array
 *
 *@a: ptr
 *@n: length
 *
 */
void reverse_array(int *a, int n)
{
int b;
int c;
int d;
if (n % 2 != 0)
d = n + 1;
else
d = n;
for (b = 0; b < d / 2; b++)
{
c = a[b];
a[b] = a[n - 1 - b];
a[n - 1 - b] = c;
}
}

