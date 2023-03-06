#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void pointer ( char * point) {
    point = "asd";
}

int main() {
    char * point;
    pointer(point);
    printf("%s\n", point);
    return 0;
}
