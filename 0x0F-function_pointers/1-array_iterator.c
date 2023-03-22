#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - run a function given as a parameter on each array element
 * @array: array elements -> action.
 * @size: size of an array.
 * @action: function to run.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int  i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
