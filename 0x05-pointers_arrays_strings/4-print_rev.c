#include "main.h"
/**
* print_rev - a function that print string in reverse
* @s: the character to be inputted
*/

void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);

	_putchar('\n');
}
