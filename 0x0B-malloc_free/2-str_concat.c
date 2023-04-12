#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = a = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;
	conc = malloc(sizeof(char) * (i + a + 1));

	if (conc == NULL)
		return (NULL);
	i = a = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}

	while (s2[a] != '\0')
	{
		conc[i] = s2[a];
		i++, a++;
	}
	conc[i] = '\0';
	return (conc);
}
