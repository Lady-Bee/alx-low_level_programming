#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - A function that gets the
 * nth node of a dlistint_t linked list
 * @head: The pointer to head of list
 * @index: The index of node to find
 * Return: A pointer to node if found, or NULL in otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
