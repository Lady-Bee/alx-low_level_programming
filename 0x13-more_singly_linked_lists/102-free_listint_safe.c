#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *slow, *fast, *loop_node;

	if (!h || !*h)
		return (0);
	slow = fast = *h;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_node = *h;
			while (loop_node != slow)
			{
				loop_node = loop_node->next;
				slow = slow->next;
			}
			while (loop_node->next != slow)
			{
				len++;
				loop_node = loop_node->next;
				free(loop_node);
			}
			len++;
			free(loop_node->next);
			loop_node->next = NULL;
			*h = NULL;
			return (len);
		}
	}
	while (*h)
	{
		len++;
		slow = *h;
		*h = (*h)->next;
		free(slow);
	}
	return (len);
}
