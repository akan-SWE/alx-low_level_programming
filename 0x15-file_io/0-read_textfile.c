#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: The name of the file
 * @letters: Number of characters to read
 *
 * Return: Number of characters written, otherwise 0 if the function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t charsRead, charsWritten;
	int fd;

	if (filename == NULL)
		return (0);

	fd =  open(filename, O_RDONLY);

	/* Failed to open file */
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	memset(buffer, 0, letters); /* Initialize buffer to null */

	charsRead = read(fd, buffer, letters);
	/* read fails */
	if (charsRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	charsWritten = write(STDOUT_FILENO, buffer, charsRead);
	close(fd);
	free(buffer);

	/* write fails */
	if (charsWritten != charsRead)
		return (0);

	return (charsWritten);
}
