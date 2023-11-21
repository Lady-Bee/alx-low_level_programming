#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the reversed list
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reversed = NULL;
	listint_t *current = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = reversed;

		reversed = current;
		current = *head;
	}
	*head = reversed;
	return (*head);
}
