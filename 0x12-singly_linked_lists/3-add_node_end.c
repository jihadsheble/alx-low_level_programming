#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t list
 * @str: string where a new node will put
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *neew;
	list_t *teemp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	neew = malloc(sizeof(list_t));
	if (!neew)
		return (NULL);

	neew->str = strdup(str);
	neew->len = len;
	neew->next = NULL;

	if (*head == NULL)
	{
		*head = neew;
		return (neew);
	}

	while (teemp->next)
		teemp = teemp->next;

	teemp->next = neew;

	return (neew);
}
