#include "main.h"

/**
 * last_index - returns the last index of a string (counts the null char)
 * @s: pointer the string
 * Return: int
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int last = last_index(s);

	return (check(s, 0, last - 1, last % 2));
}

/**
 * check - checker for the palindrome
 * @s: string
 * @first: int moves from right to left
 * @last: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */


int check(char *s, int first, int last, int pair)
{

	if ((first == last && pair != 0) || (first == last + 1 && pair == 0))
		return (1);
	else if (s[first] != s[last])
		return (0);
	else
		return (check(s, first + 1, last - 1, pair));
}
