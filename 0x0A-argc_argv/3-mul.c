#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * atoi - converts a string to int
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num_a, num_b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num_a = atoi(argv[1]);
	num_b = atoi(argv[2]);
	result = num_a * num_b;

	printf("%d\n", result);

	return (0);
}
