#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: list_t list that will be freed
 */
void free_list(list_t *head)
{
	list_t *teemp;

	for (teemp = head; teemp; teemp = head)
	{
		head = head->next;
		free(teemp->str);
		free(teemp);
}

}
