/*
 * File: 0-read_textfile.c
 * Haroun MAGIO
*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_file(const char *filename, size_t letters) {
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

