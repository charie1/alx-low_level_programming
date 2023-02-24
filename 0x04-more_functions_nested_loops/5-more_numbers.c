#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: Success (0)
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num <= 14; num++)
	{
		for (num = 0; num <= 14; num ++)
			{
				_putchar(num);
				_putchar('\n');
			}
	}

	_putchar('\n');
}

