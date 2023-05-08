/*
 * File name: 0-read_textfile.c
 * Author: Haroun wabwire(haru-voster)
 */
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t p, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	p = open(filename, O_RDONLY);
	r = read(p, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (p == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(p);

	return (w);
}

