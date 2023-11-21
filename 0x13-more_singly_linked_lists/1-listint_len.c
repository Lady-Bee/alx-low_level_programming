#include "lists.h"

/**
* listint_len - Function returns the number of elements in a linked list.
* @h: pointer to the head of the linked list.
*
* Return: Returns the number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		h = h->next;
		nodenum++;
	}
	return (nodenum);
}
