#include "main.h"
#include <stdlib.h>
/**
* *argstostr - concatenates all args of the program
* @ac: number of arguments
* @av: array of arguments
*
* Return: Pointer to string (Success), NULL (Error)
*/

char *argstostr(int ac, char **av)
{
	int i, n, a = 0, b = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			b++;
	}
	b += ac;

	str = malloc(sizeof(char) * b + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[a] = av[i][n];
		a++;
	}
	if (str[a] == '\0')
	{
		str[a++] = '\n';
	}
	}
	return (str);
}
