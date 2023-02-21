#include "main.h"
/**
* print_alphabet_x10 - prints the lowercase alphabet 10 times
*
* Return: Success (0)
*/

void print_alphabet_x10(void)
{
	int run_10x;
	char letters;

	for (run_10x = 1; run_10x <= 10; run_10x++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);

	_putchar('\n');
	}
}
