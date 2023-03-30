#include "lists.h"
#include <stdlib.h>

typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

void free_list(list_t *head) {
    while (head != NULL) {
        list_t *current_node = head;
        head = head->next;
        free(current_node->str);
        free(current_node);
    }
}

