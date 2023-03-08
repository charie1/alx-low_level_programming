#include "main.h"
/**
* _pow_recursion - it present the power of 2 values.
* @x: the first value.
* @y: the exponent value.
*
* Return: sucess
*/

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
	{
		res *= _pow_recursion(x, y - 1);
		return (res);
	}
}
