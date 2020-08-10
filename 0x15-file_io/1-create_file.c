#include "holberton.h"
/** create_file - create file
 * @filename: file
 * @text_content: write to file
 * Return: 1 on success 0 fail
 */
int create_file(const char *filename, char *text_content)
{
	int d, s, k;

	if (filename == NULL)
		return (-1);

	d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (d == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (k = 0 ; text_content[k] != '\0' ; k++)
		;
	s = write(d, text_content, k);
	if (s == -1)
		return (-1);
	return (1);
}