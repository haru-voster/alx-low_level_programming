#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0; // Return 0 if filename is NULL
    }

    int file1 = open(filename, O_RDONLY);
    if (file1 == -1) {
        return 0; // Return 0 if file can't be opened
    }

    char buffer[letters];
    ssize_t bytes_read = read(file1, buffer, letters);
    if (bytes_read == -1) {
        close(file1);
        return 0; // Return 0 if read fails
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    close(file1);

    if (bytes_written == -1 || bytes_written != bytes_read) {
        return 0; // Return 0 if write fails or doesn't write expected amount of bytes
    }

    return bytes_written; // Return the actual number of letters read and printed
}

