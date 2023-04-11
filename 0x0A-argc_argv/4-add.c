#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	int x, y;
	int sum = 0;
	char c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			c = argv[x][y];
			if (c < '0' || c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
