#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring.
* @s: String where substring will appear.
* @accept: Substring of accepted charecters.
* Return: Length of occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *h = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		if (!(*--accept))
			break;
		accept = h;
	}
	return (a);
}
