#include <stdio.h>
#include <stdlib.h>
/**
 * main - argv display
 * @argc: var
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1, ar;

	for (i = 1; i < argc; i++)
	{
		ar = atoi(argv[i]);
		mul *= ar;
	}
	printf("%d\n", mul);
	return (0);
}
