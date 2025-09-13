#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
typedef struct Node
{
    int n;
    struct Node* next;
    struct Node* prev;

}dlistint_t;

int _putchar(char c);
size_t print_dlistint(const dlistint_t *h);

#endif
