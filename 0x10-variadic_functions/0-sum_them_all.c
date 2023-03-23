#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sums all the numbers inputted.
* @n: the num of variadic arguments to be passed.
* 
* Return: success
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list myNum;
	unsigned int count;
	unsigned int sum = 0;

	va_start (myNum, n);

	if (n == 0)
		return (0);

	for (count = 0; count < n; count++)
	sum = sum + (va_arg(myNum, int));
				    
	va_end (myNum);

	return (sum);
}
