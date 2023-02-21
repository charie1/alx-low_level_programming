#include "main.h"
/**
* _islower - print number 1 for lowercase letter 1
*@c: the alphabet and varible c
* Return: Succes(0)
*/

int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'c')
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}
