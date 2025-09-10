#ifndef LISTS_H
#define LISTS_H


#include <stddef.h>

int _putchar(char c);
typedef struct elements
{
	char *str;
	int len;
	struct elements* next;
}list_t;
size_t print_list(const list_t *h);
#endif
