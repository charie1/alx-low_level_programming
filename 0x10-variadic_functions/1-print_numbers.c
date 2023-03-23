#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - print all numbers assigned
* @separator: separate the numbers imputted.
* @n: tells the no of nummbers to be inputted.
*
* Return: success
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;

	va_list myNum;

	va_start(myNum, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(myNum, int));

		if (count != (n - 1) &&  separator != NULL)
			printf("%s", separator);
	}
	va_end(myNum);

	printf("\n");

}
