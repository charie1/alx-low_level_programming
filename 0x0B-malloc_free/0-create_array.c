#include <stdlib>
#include "main.h"
/**
* create_array - print an array of characters in a malloc
* @size: the size of the array
* @c: the character in the malloc space
* Return: success
**/

char *create_array(unsigned int size, char c);
{
	char *char_Array;
	unsigned int count;

	if (size == 0)
		return (null);

	char_Array = malloc(size * sizeof(char));

	if (char_Array == null)
		return (null);

	for (count = 0; count < size; count++)
		char_Array[count] = c;

	return (char_Array);
}
