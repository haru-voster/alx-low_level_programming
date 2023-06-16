#include "lists.h"

/**
 * add_dnodeint - add node at beginning of the list
 * @head: double ptr to the head of the list
 * @n:data
 * Return: next pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *next;

	if (head == NULL)
		return (NULL);
	next = malloc(sizeof(dlistint_t));

	if (next == NULL)
		return (NULL);

<<<<<<< HEAD
	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		temp->prev = new_node;
		*head = new_node;
		new_node->next = temp;
		return (new_node);
	}
=======
	next->n = n;
	next->next = *head;
	next->prev = NULL;
>>>>>>> d01017ae46aa4b7214c8f73b3562c2b99fc0b573

	if (*head != NULL)
		(*head)->prev = next;
	*head = next;
	return (next);
}
