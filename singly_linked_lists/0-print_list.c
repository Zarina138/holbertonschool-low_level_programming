#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of list
 * return: return counts of elements
 *
 */
typedef struct elements
{
	char *str;
	int len;
	struct element* next;
}list_t;
size_t print_list(const list_t *h)
{
	size_t count = 0;
	while(h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len,h->str);
		h = h->next;
		count++;
	}
	return count;
}
