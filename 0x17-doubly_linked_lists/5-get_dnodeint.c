#include "lists.h"

/**
 * get_dnodeint_at_index - gets a doubly linked list node at a a given inedex
 * @head: pointer to head of DLL to look through
 * @index: index of node to find
 *
 * Return: pointer to node if found, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x++ == index)
			break;
		head = head->next;
	}
	return (head);
}
