#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;
	int j;
	j = sizeof(a);

	for (i = 0; i < j; i++)
{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		j--;

	}
}
