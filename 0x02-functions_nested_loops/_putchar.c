<<<<<<< HEAD
#include<stdio.h>
/* * put char that prints 
 * on error return -1
 * */
int _putchar(char c)
{
	return( write(1, &c, 1));
=======
#include <unistd.h>
/**
 * * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> ef8abb674573f2f95d5ca8a4b5a1ee409c1f5aa8
}
