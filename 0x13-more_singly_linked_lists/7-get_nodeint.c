#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the listint_t list.
 * @index: The index of the node that will be located.
 * Return:  the located node , if not exists Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		head = head->next;
		index--;
	}

	return (head);
}
