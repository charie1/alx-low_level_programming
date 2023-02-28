#include "main.h"
/**
* _puts - print the *str function
*@str: the character to be printed.
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
