#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;

	if (!h || !*h)
		return (0);

	current = *h;

	while (current)
	{
		size++;
		tmp = current;
		current = current->next;
		free(tmp);

		if (tmp->next == *h)
		{
			*h = NULL;
			return (size);
		}
	}
	*h = NULL;
	return (size);
}
