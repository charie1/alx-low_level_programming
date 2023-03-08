#include "main.h"
/**
* factorial - multiply the s number
* @n: the num to be inputted
* Return: success
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
	{
		return (n * factorial(n - 1));
	}
}
