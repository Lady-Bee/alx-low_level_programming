#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a linked list of type list_t.
* @head: A pointer to the head of the linked list.
* Description: This function frees each node of the linked list,
*              including the strings within each node.
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;

		if (temp->str)
		{
			free(temp->str);
			temp->str = NULL;
		}
		free(temp);
	}
}

