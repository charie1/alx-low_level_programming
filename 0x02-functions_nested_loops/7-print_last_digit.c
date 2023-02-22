#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: a number to be computed
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n *= 11;

	_putchar(n);

	return (n);
}
