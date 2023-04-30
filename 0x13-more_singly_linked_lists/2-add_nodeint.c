#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *     of a listint_t list.
 * @head: pointer to the listint_t list.
 * @n: int to insert in that new node.
 * Return: the address of the new element , if fails Null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
