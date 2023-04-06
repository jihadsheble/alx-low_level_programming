#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */


int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @res: int
 * Return: int
 */

int check_prime(int n, int res)
{

	if (res >= n && n > 1)
		return (1);
	else if (n % res == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, res + 1));
}
