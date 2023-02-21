#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @x: the number
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (x < 0)
	{
		last_digit = (-1 * (x % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (x % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
