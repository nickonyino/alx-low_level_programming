#include "lists.h"

/**
 * dlistint_len - Returns the total
 * number of elements in a dlistint_t list.
 * @h: Pointer to head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}