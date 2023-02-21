#include "main.h"
/**
* _islower - print number 1 for lowercase letter 1
*@c: the alphabet and varible c
* Return: Succes(0)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
