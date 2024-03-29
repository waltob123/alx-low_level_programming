#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes a dog structure
  * @d: A dog structure
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
