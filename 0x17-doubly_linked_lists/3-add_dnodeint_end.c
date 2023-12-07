#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end -Always adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Integer value for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* to set the values for the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* code if the list is empty, the new node becomes the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* code for finding the last node in the list */
	last = *head;
	while (last->next != NULL)
		last = last->next;

	/* code for Updating  pointers to link the new node at the end */
	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
