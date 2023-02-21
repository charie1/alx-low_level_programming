#include "main.h"
/**
* _abs - Computes the absolute value of an integer
* @x: the interger to be computed
* Return: the absolute value of the integer
*/

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
	_putchar('\n');
}
