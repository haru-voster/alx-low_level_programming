#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 given  an index
  * @n: unsigned long to change
  * @index: index to change to zero
  * Return: 1 if it worked or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int value;

	if (index > 98 || !n)
		return (-1);
	value = 1 << index;
	*n = (*n & ~value) | ((0 << index) & value);
	return (1);
}
