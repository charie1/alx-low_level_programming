#include "main.h"
/**
* _print_rev_recursion - it print the string in reverse.
* @s: the string to be printed.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_print_rev_recursion(1 + s);
		_putchar(*s);
	}
}
