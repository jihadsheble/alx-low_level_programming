#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: pointer to the listint_t list.
 * Return: The head node's data (n).
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;

	free(tmp);

	return (data);
}
