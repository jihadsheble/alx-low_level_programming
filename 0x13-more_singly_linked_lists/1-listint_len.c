#include "lists.h"

/**
 * listint_len - Returns number of elements
 *               in linked listint_t list.
 * @h: pointer to the listint_t list.
 * Return: no. of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_ = 0;

	while (h)
	{
		nodes_++;
		h = h->next;
	}

	return (nodes_);
}
