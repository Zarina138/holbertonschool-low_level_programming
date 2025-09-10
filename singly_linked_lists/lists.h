#ifndef LISTS_H
#define LISTS_H


#include <stddef.h>

/**
 * struct elements - singly linked list node
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
int _putchar(char c);
typedef struct elements
{
	char *str;
	int len;
	struct elements *next;
} list_t;
size_t print_list(const list_t *h);
#endif
