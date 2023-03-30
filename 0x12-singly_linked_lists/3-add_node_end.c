#include "lists.h"
#include <stdlib.h>
#include <string.h>

typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str) {
    if (str == NULL) {
        return NULL;
    }

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;
    }

    char *str_copy = strdup(str);
    if (str_copy == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->str = str_copy;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        list_t *current_node = *head;
        while (current_node->next != NULL) {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }

    return new_node;
}

