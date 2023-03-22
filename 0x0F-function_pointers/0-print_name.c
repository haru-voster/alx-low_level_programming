#include "function_pointers.h"

#include <stdio.h>

/**
 * print_name - check the code for ALX School students.
 * @name: name of a person.
 * @f: print name as is and UPPERCASE.
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
