#ifndef MAIN_H
#define MAIN_H
void simple_print_buffer(char *buffer, unsigned int size)
void simple_print_buffer(char *buffer, unsigned int size)
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
char *_strchr(char *s, char c);

#endif
