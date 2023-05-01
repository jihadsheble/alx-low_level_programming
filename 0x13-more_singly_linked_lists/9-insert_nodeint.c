#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *      list at a given position.
 * @head: pointer to the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node will be added - start at 0.
 * @n: The integer for the new node.
 * Return:  the address of the new node , if fails Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *copy = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	while (--idx && copy)
		copy = copy->next;

	if (!copy)
	{
		free(new);
		return (NULL);
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
