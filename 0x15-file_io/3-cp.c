#include "main.h"

/**
 * cp - Copy's one file to another
 *
 * @copyFrom: The file to copy from
 * @copyTo: The file to copy to
 *
 */
void cp(char *copyFrom, char *copyTo)
{
	int fd;
	char *data, *buffer;
	ssize_t size, position, data_len;

	fd = open(copyFrom, O_RDONLY); /* Open the file */

	size = SIZE;
	data = malloc(size);
	if (fd == -1 || data == NULL)
	{
		printf("Error: Can't read from file %s\n", copyFrom);
		exit(98);
	}

	buffer = malloc(size);
	if (buffer == NULL)
	{
		printf("Error: Can't read to file %s\n", copyTo);
		exit(99);
	}

	position = 0;
	while ((data_len = read(fd, data, SIZE)))
	{
		if (data_len == -1)
		{
			printf("Error: Can't read from file %s\n", copyFrom);
			close(fd);
			exit(98);
		}
		add_to_buffer(&buffer, data, &size, &position, data_len);
	}
	file_to(buffer, copyTo, position);
	free_all(buffer, data, fd);
}

/**
 * add_to_buffer - Adds @data to @buffer, effectively reducig number of
 * system calls to write
 *
 * @data: The data to store in the @buffer
 * @buffer: The buffer to store @data
 * @size: The size of the buffer, increases
 * when it full
 * @position: Keeps track of The last character added to the @buffer
 * @data_len: The length of the data
 *
 * Return: The number of character added to the buffer
 */
ssize_t add_to_buffer(char **buffer, const char *data,
					  ssize_t *size, ssize_t *position, ssize_t data_len)
{

	if ((*position + data_len) >= *size)
	{
		/* Double the size */
		*size *= 3;
		*buffer = realloc(*buffer, *size);

		if (*buffer == NULL)
			exit(99);
	}

	memcpy(*buffer + *position, data, data_len);
	*position += data_len;
	(*buffer)[*position] = '\0';

	return (data_len);
}

/**
 * file_to - File to content or data copy to
 *
 * @buffer: This buffer contains all the content
 * so just write it out to the file descriptor
 * @copyTo: The file to copy to
 * @length: The number of characters in the buffer
 *
 * Return: void (Nothing)
 */
void file_to(char *buffer, char *copyTo, ssize_t length)
{
	int fd;

	fd = open(copyTo, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	/* Cannot open the file */
	if (fd == -1)
	{
		printf("Error: Can't write to file %s\n", copyTo);
		exit(99);
	}

	/* Store the content in the buffer to the file */
	if (write(fd, buffer, length) == -1)
	{
		printf("Error: Can't write to file %s\n", copyTo);
		exit(99);
	}
}

/**
 * free_all - Frees all allocated memory including
 * the file descriptor
 *
 * @buffer: The buffer that stores the data
 * @data: The data to store in the buffer
 * @fd: The file descriptor to close
 *
 *
 * Return: void (Nothing)
 */
void free_all(char *buffer, char *data, int fd)
{
	free(buffer);
	free(data);

	if (close(fd) == -1)
	{
		/* Can't close the file descriptor */
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd);
		exit(100);
	}
}

/**
 * main - Start the program by collecting the argument
 *
 * @argc: The number of argument
 * @argv: The arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}
