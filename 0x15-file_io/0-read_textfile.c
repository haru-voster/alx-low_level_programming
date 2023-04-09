#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - reads a text file and prints it to the POSIX stdout
  * @filename: file to read
  * @letters: number of letters it should read and print
  * Return: number of letters it could read and print or 0 if fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int x;
	size_t lRead, check;

	if (!filename || !letters)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);
	/* open file */
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		free(buff);
		return (0);
	}
	/* read file up to "letters" amount of charachters */
	lRead = read(x, buff, letters);
	if (lRead < 1)
	{
		free(buff);
		close(x);
		return (0);
	}
	/* write content read */
	check = write(STDOUT_FILENO, buff, lRead);

	free(buff);
	close(x);

	if (!check || check != lRead)
		return (0);

	return (lRead);
}
