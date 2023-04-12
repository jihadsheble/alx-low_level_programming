#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - creates 2d array of integars
 * @width: matrix width
 * @height: matrix height
 *
 * Return: pointer to matrix (Success), NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **jj;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	jj = malloc(sizeof(int *) * height);

	if (jj == NULL)
		return (NULL);

	for (i = 0; i< height; i++)
	{
		jj[i] = malloc(sizeof(int) * width);

		if (jj[i] == NULL)
		{
			for (; i >= 0; i--)
				free(jj[i]);

			free(jj);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mee[i][j] = 0;
	}

	return (jj);
}
