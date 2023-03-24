#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int count;

	va_list list;

	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
