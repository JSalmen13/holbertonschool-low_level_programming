#include <stdio.h>
/**
* main - last digit
* @a -int
* @h -int
* Return: 0
**/
int main(void)
{
	int a = '0';
	int h = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
