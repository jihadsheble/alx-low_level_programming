#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: a double pointer to the list_t list
 * @str: new string that will be added in the node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *neew;
	unsigned int len = 0;

	while (str[len])
		len++;

	neew = malloc(sizeof(list_t));
	if (!neew)
		return (NULL);

	neew->str = strdup(str);
	neew->len = len;
	neew->next = (*head);
	(*head) = neew;

	return (*head);
}
