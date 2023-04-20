#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string that will be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it won’t be printed.
 *              If one of the strings is NULL, (nil) will be printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *strg;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(strings, char *);

		if (strg == NULL)
			printf("(nil)");
		else
			printf("%s", strg);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
