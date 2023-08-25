#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t new = 0;

	while (h)
	{
		if (h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		new++;
		h = h->next;
	}

	return (new);
}
