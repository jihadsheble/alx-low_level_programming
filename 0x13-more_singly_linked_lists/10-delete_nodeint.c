#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *        index of a listint_t list.
 * @head: pointer to the listint_t list.
 * @index: The index of the node that will be deleted
 * Return: On success -(1).
 *         On failure - (-1).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < index && copy; node++, copy = copy->next)
	{
		if (node == index - 1)
		{
			tmp = copy->next;
			copy->next = tmp->next;
			free(tmp);
			return (1);
		}
	}

	return (-1);
}
