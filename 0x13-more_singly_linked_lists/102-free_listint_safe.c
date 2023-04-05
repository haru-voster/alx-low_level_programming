#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to pointer to head of list
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		count++;
		if (current <= current->next)
		{
			free(current);
			break;
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;

	return (count);
}
