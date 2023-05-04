#include "main.h"

/**
  * haru-voster:author
  * set_bit - sets the value of a bit to 1
  * @n: unsigned long to change
  * @index: index to change to oneven an index
  * Return: 1 if it worked or -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
