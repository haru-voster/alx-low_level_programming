#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void copy_text_file(int f1, int f2, char *file_1, char *file_2);
void check_elf(unsigned char *e_iden_t)
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_textfile(char *filename, char *filecopy, int letters);
int create_copyfile(const char *filename, char *text_content);
int append_text_to_copyfile(const char *filename, char *text_content);

#endif
