#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump 
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: idx of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, m, l, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	l = 0;
	prev = idx = 0;

	do {
		printf("Value checled array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		l++;
		prev = idx;
		idx = l * m;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between idxes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checled array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
