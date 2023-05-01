#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) of a listint_t list.
 * @head: pointer to the listint_t list.
 * Return: the sum of all the data , if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
