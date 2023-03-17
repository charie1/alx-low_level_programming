#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - checks the memory allocated.
* @b: the int allocated.
* Return: success
**/

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
