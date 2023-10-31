#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: The name of the file to append text to
 * @text_content: The content to append to the @filename
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	/* open failed */
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1); /* write failed */
	}

	return (1); /* Success */
}
