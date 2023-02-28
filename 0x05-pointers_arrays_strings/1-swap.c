#include "main.h"
#include <stdio.h>
/**
* swap_int - the pointer that swaps two values: a, b.
* @a: the 1st integer to be swaped.
* @b: te next integer to be swaped.
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
