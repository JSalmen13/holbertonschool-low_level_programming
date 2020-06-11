#include <stdio.h>
/**
* main - last digit
* @a -char
* Return: 0
**/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
