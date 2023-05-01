#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *        end of a listint_t list.
 * @head: pointer to the listint_t list.
 * @n: int to insert in that new node.
 * Return: the address of the new element, Null if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		listint_t *last = *head;

		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;

	return (new);
}
