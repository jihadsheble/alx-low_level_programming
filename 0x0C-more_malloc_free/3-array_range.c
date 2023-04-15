#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
	return (NULL);


	len = max - min + 1;

	a = malloc(sizeof(int) * len);


	if (a == NULL)
	return (NULL);


	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
