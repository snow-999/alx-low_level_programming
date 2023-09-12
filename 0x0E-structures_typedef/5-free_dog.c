#include "dog.h"
#include <stdlib>
/**
 * free_dog - free dog
 * @d: dog
 * Return: no return
*/
void free_dog(dog_t *d)
{
	if (d)
	{
	if (d->name)
	{
	free(d->name);
	}
	if (d->owner)
	{
	free(d->owner);
	}
	free(d);
	}
}
