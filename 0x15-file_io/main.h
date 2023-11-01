#ifndef MAIN_H
#define MAIN_H

/* System headers */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/* Constant */
#define SIZE 1024
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
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: The name of the file to append text to
 * @text_content: The content to append to the @filename
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);


/**
 * cp - Copy's one file to another
 *
 * Return: void (Nothing)
 */
void cp(char *, char *);

/**
 * add_to_buffer - Adds data to buffer, effectively reducig number of
 * system calls to write
 *
 * Return: The number of character added to the buffer
 */
ssize_t add_to_buffer(char **, const char *, ssize_t *,
					  ssize_t *, ssize_t);

/**
 * file_to - File to content or data copy to
 *
 * Return: void (Nothing)
 */
void file_to(char *, char *, ssize_t);

/**
 * free_all - Frees all allocated memory including
 * the file descriptor
 *
 * Return: void (Nothing)
 */
void free_all(char *, char *, int);
#endif /* MAIN_H */
