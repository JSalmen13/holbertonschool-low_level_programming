#include <stdio.h>
/**
* main - mirror 
* @a -char
* Return: 0
**/
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
