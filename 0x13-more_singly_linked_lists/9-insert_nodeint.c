#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where new node is aded
 * @n: data to insert in the new node
 * Return: address of new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int count = 0;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
		new_node->n = n;
		new_node->next = NULL;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

	for (count = 0; current && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
	}
	return (NULL);
}
