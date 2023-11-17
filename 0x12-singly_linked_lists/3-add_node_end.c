#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a list_t list.
* @head: A double pointer to the head of the list.
* @str: The string to be duplicated and stored in the new node.
*
* Return: The address of the new element, or NULL if it fails.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *addnode;
	int count = 0, i;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;

	n_node->len = count;
	n_node->next = NULL;

	addnode = *head;

	if (addnode == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (addnode->next != NULL)
		{
			addnode = addnode->next;
		}
		addnode->next = n_node;
	}
	return (*head);
}
