#include <stdlib.h>
#include "main.h"

/**
 * count_word - count the number of words in a string
 * @s: string to be evaluated
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, cc, ww;

	flag = 0;
	ww = 0;

	for (cc = 0; s[cc] != '\0'; cc++)
	{
		if (s[cc] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			ww++;
		}
	}

	return (ww);
}
/**
 * **strtow - function that splits a string into words
 * @str: string to be splitted
 *
 * Return: pointer to array of strings (Success) NULL (Error)
 */
char **strtow(char *str)
{
	char **matrixx, *tmpp;
	int i, kk = 0, len = 0, wordss, cc = 0, start, end;

	while (*(str + len))
		len++;
	wordss = count_word(str);
	if (wordss == 0)
		return (NULL);

	matrixx = (char **) malloc(sizeof(char *) * (wordss + 1));
	if (matrixx == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (cc)
			{
				end = i;
				tmpp = (char *) malloc(sizeof(char) * (cc + 1));
				if (tmpp == NULL)
					return (NULL);
				while (start < end)
					*tmpp++ = str[start++];
				*tmpp = '\0';
				matrixx[kk] = tmpp - cc;
				kk++;
				cc = 0;
			}
		}
		else if (cc++ == 0)
			start = i;
	}

	matrixx[kk] = NULL;

	return (matrixx);
}
