#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: Success (0)
 */

void more_numbers(void)
{
	int num;
	int count;

	for (num = 0; num <= 9; num++)
	{
		for (count = 0; count <= 14; count ++)
			{
				if (count> 9)
												_putchar((count / 10) + '0');
											_putchar((count% 10) + '0');
			}
	}

	_putchar('\n');
}

