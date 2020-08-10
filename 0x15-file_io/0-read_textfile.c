#include "holberton.h"
/**
 * read_textfile - Read text file
 * @filename: file
 * @letters: letters num ber
 * Return: success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t S, s;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	S = read(a, buf, letters);
	if (S == -1)
		return (0);

	*(buf + S) = '\0';

	s = write(STDOUT_FILENO, buf, S);
	if (s == -1 || s != S)
		return (0);
	close(a);
	return (s);
}
