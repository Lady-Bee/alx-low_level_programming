#include <unistd.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a linked list.
* @h: A pointer to the head of the linked list.
*
* Return: number of nodes. If str is NULL, print [0] (nil).
*/

size_t print_list(const list_t *h)
{
	size_t node_c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);

		}
		h = h->next;
		node_c++;
	}
	return (node_c);
}
