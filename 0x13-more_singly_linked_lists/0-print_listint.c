#include "lists.h"

/**
* print_listint - Prints all the elements of a linked list.
* @h: A pointer to the head of the linked list.
*
* Return: number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t n_node = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		n_node++;
	}
	return (n_node);
}
