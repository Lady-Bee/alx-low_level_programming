#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: The pointer to head of dlistint_t to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
