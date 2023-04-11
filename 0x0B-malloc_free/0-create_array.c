#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of size (size) and assign char c
 * @size: the size of array
 * @c: char that will be assigned
 * 
 * Return: pointer to array, NULL if compilation failed
 *
 */
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int a;

	st = malloc(sizeof(char) * size);
	if (size == 0 || st == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		st[a] = c;
	return (st);
}
