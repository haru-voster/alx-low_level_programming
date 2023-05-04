#include "main.h"

/**
  *haru-voster: author 
  * print_binary - prints the binary rep of a number
  * @n: unsigned long, number to be represented in binary
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}

