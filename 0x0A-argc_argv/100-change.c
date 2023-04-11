#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, a, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	result = 0;

	if (num1 < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && num1 >= 0; a++)
	{
		while (num1 >= coins[a])
		{
			result++;
			num -= coins[a];
		}
	}

	printf("%d\n", result);
	return (0);
}
