#include "main.h"
/**
 * print_line - checks the digit typed.
 * @n: the num to be typed
 * @y: the line to be drawn
 * Return: Success(0).
 */

void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
			_putchar ('_');
	}

	else
		_putchar('\n');
}
	
