#ifndef MAIN_H
#define MAIN_H

/* System headers */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: The name of the file
 * @letters: Number of characters to read
 *
 * Return: Number of characters written, otherwise 0 if the function fails
 */
ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);


#endif /* MAIN_H */
