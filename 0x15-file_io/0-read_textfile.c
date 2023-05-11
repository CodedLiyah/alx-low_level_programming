#include "main.h"
#include <stddef.h>

/**
 * read_textfile - A function that reads a text,print to POSIX standard output
 * @filename: name of file
 * @letters: number of letters to be printed
 *
 * Return: The actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters;
	int file;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, 0_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	letters = read(file, text, sizeof(char) * letters);
	if (letters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	letters = write(STDOUT_FILENO, text, letters);
	if (letters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (letters);
}
