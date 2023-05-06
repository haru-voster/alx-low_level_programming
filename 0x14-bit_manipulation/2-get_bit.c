#include "main.h"
/**
 * get_bit - Get value of a bit at a given index
 *
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: Bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 67)
		return (-1);
	return ((n >> index) & 1);
}
