#include <stdio.h>
/**
* main - last digit
* @a -int
* Return: 0
**/
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
