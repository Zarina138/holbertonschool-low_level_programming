#ifndef LISTS_H
#define LISTS_H

int _putchar(char c);
size_t print_list(const list_t *h);
typedef struct elements
{
	char *str;
	int len;
	struct element* next;
}list_t;
#endif
