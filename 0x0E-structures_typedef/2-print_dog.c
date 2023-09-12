#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the date about dog
 *
 * @d : the struct of dog
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((d->name) != 0)
		{
			printf("Name: %s\n", (d->name));
		}
		else
			printf("Name: (nil)\n");
		if ((d->age) > 0)
		{
			printf("Age: %f\n", (d->age));
		}
		if ((d->owner) != 0)
		{
			printf("Owner: %s\n", (d->owner));
		}
		else
			printf("Owner: (nil)\n");
	}
}
