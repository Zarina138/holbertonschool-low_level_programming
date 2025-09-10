#ifndef LISTS_H
#define LISTS_H


#include <stddef.h>

/**
 * struct list_s - singly linked list node
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
int _putchar(char c);
struct list_s
{
	char *str;
	int len;
	struct list_s *next;
};
typedef struct list_s list_t;
size_t print_list(const list_t *h);
#endif
