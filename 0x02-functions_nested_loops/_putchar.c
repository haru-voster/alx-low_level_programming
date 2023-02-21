#include<stdio.h>
/* * put char that prints 
 * on error return -1
 * */
int _putchar(char c)
{
	return( write(1, &c, 1));
}
