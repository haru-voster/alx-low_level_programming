#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int h;

	hash = 5381;
	while ((h = *str++))
	{
		hash = ((hash << 5) + hash) + h; /* hash * 33 + h */
	}
	return (hash);
}
