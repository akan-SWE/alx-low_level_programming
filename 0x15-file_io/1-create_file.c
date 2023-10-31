#include "main.h"

/**
 * create_file - Creates a file
 * and insert text to it.
 *
 * @filename: The name of the file.
 * @text_content: The text to write to it.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…).
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* Create file */
	fd = open(filename,  O_WRONLY | O_CREAT | O_TRUNC, 0600);

	/* Failed to create file */
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1); /* Success*/
}
