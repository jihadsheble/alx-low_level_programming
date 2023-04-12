#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copies the string given as parameter
 * @str: string to be duplicated
 * Return: 0
 */
char *_strdup(char *str)
{
	char *x;
	int i, a = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		x[a] = str[a];

	return (x);
}
