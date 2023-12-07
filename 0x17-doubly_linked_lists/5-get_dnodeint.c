#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of
 * the dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the desired node, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	/* If incase the index is out of bounds or the list is empty */
	return (NULL);
}

