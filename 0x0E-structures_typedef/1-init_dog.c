#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 *
 * @d  : new struct
 * @name : name of the new struct
 * @age : age of new struct
 * @owner : name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
