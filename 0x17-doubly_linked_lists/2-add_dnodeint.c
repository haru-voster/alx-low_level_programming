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

	next->n = n;
	next->next = *head;
	next->prev = NULL;

	if (*head != NULL)
		(*head)->prev = next;
	*head = next;
	return (next);
}
