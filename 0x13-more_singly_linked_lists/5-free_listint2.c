#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: pointer to the listint_t list.
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}

	*head = NULL;
}
