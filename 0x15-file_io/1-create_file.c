#include "main.h"

/**
 * create_file - create a file
 * @filename: the file to read
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, wrt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; i < text_content[i]; i++)
		;

	wrt = write(fd, text_content, i);

	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
