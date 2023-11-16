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
	size_t nodecount = 0;
	char buffer[20];

	while (h != NULL)
	{
		if (h->str == NULL)
			write(1, "[0] (nil)\n", 11);
		else
		{
			int len = sprintf(buffer, "[%d] %s\n", h->len, h->str);

			write(1, buffer, len);
		}
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
