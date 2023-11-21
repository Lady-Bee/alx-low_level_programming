#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - Adds a new node at the end of a listint_t list.
* @head: A double pointer to the head of the list.
* @n: Integer value.
*
* Return: The address of the new element, or NULL if it fails.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *addnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	addnode = *head;

	if (addnode == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (addnode->next != NULL)
		{
			addnode = addnode->next;
		}
		addnode->next = newnode;
	}
	return (newnode);
}
