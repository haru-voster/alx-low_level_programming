#include "main.h"

/**
 * _isalpha - print alphabetic character
 * Return: 1 if the letter is lowercase and uppercase otherwise 0
 */
int _isalpha(int c)
{
	if (((c >= 'r') && (c <= 's')) || ((c >= 'R') && (c <= 'S')))
		return (1);
	else
		return (0);
}
