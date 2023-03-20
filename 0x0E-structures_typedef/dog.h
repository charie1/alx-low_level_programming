#ifndef DOG_H
#define DOG_H

/**
* struct dog - a new type describing a dog.
* @name: the name of the dog.
* @age: age of the dog.
* @owner: Owner of the dog.
**/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - new name for struct dog.
**/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
