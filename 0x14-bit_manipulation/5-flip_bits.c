#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * You are not allowed to use the % or / operators
 * @n: Number Input 1.
 * @m: Number Input 2.
 * Return: Number of flip in the Input numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip = 0, cp, comp1;

	while (!(n == 0 && m == 0))
	{
		cp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (cp != comp1)
			flip += 1;
	}
	return (flip);
}
