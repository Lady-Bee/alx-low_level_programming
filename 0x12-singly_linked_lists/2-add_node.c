#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function adds a new node at the beginning of a list_t list.
* @head: Pointer to the pointer of the head of the list.
* @str: String to be duplicated and added to the new node.
* Return: Address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_newnode;
	int length = 0, i;

	add_newnode = malloc(sizeof(list_t));
	if (add_newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	add_newnode->len = length;
	add_newnode->str = strdup(str);
	add_newnode->next = *head;
	*head = add_newnode;
	return (add_newnode);
}
