#include "dog.h"
#include <stdlib.h>
/**
* free_dog - frees the space allocated to struct dog_t
* @d: point to the struct dog_t.
**/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

		free(d->name);
		free(d->owner);
		free(d);
}
