#include "function_pointers.h"
#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* get_op_func - function that returns operator asked by the user
* @s: operator passed as argument
* Return: pointer to function
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;
return (ops[i].f);
}

