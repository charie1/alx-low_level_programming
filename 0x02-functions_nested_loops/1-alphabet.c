#include "main.h"
/**
* print_alphabet - print alphabet in lowercase
*
* Return: success (0)
*/

void print_alphabet(void)
{
	char letters;

	letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n);
}
