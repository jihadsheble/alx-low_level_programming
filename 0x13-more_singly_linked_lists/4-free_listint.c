#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: pointer to the listint_t list that will be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
