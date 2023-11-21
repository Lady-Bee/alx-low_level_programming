#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint - function adds a new node at the beginning of a list.
* @head: Pointer to the pointer of the head of the list.
* @n: integer value
* Return: Address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_newnode;

	add_newnode = malloc(sizeof(listint_t));
	if (add_newnode == NULL)
		return (NULL);

	add_newnode->n = n;
	add_newnode->next = *head;
	*head = add_newnode;
	return (add_newnode);
}
