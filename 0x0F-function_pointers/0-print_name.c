#include<stdio.h>
#include "function_pointers.h"
/**
 *print_name - function that print a name
 * @name: name of the person
 *@f: pointer to function
 * Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
