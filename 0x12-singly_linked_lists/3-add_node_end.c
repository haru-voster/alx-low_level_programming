#include "list.h"
#include <stdio.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));
    list_t *last_node = *head;

    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    new_node->len = _strlen(str);
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return (new_node);
    }

    while (last_node->next != NULL)
        last_node = last_node->next;

    last_node->next = new_node;

    return (new_node);
}

/**
 * _strlen - Returns the length of a string
 * @str: String to be measured
 *
 * Return: Length of the string
 */
int _strlen(const char *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;

    return (len);
}

