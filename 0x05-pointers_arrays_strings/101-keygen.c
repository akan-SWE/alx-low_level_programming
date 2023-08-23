#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * generate_password - generate valid passwords
 *
 * @password: the password to generate
 * Return: void
 */
void generate_password(char *password)
{
	int charset_length, random_index, i;
	const char charset[] =
	    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	charset_length = strlen(charset);

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		random_index = rand() % charset_length;
		password[i] = charset[random_index];
	}

	password[PASSWORD_LENGTH] = '\0';
}

/**
 * main - Entry point for the program
 *
 * Return: void
 */
int main(void)
{
	char
	    password[PASSWORD_LENGTH + 1]; /* Allocate space for the password */

	srand(time(NULL));

	generate_password(password);

	printf("%s\n", password);

	return (0);
}
