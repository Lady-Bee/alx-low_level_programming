#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int index_count = 0;

	while (head != NULL)
	{
		if (index_count == index)
		{
			return (head);
		}
		index_count++;
		head = head->next;
	}
	return (NULL);
}
