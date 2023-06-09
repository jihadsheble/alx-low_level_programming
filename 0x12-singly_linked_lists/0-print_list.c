#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print
 * Return: number of nodes that will be printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (s = 0; h; h = h->next, s++)
{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
}

	return (s);
}
