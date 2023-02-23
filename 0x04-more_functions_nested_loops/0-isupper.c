#include "main.h"
/**
 * _isupper - print alphabet in uppercase.
 *
 * @c: character to be typed.
 * Return: success.
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
