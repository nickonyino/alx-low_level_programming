#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int data = 0;
    listint_t *temp;

    if (head && *head)
    {
        data = (*head)->n;
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    return (data);
}
