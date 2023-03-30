#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        printf("[%d] %s\n", current->len, current->str != NULL ? current->str : "(nil)");
        count++;
        current = current->next;
    }

    return count;
}
