#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_file(const char *filename, size_t letters)
 {
    if (filename == NULL) {
        return 0; // Return 0 if filename is NULL
    }

    int text = open(filename, O_RDONLY);
    if (text == -1) {
        return 0; // Return 0 if file can't be opened
    }

    char buffer[letters];
    ssize_t bytes_read = read(text, buffer, letters);
    if (bytes_read == -1) {
        close(text);
        return 0; // Return 0 if read fails
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    close(text);

    if (bytes_written == -1 || bytes_written != bytes_read) {
        return 0; // Return 0 if write fails or doesn't write expected amount of bytes
    }

    return bytes_written; // Return the actual number of letters read and printed
}

