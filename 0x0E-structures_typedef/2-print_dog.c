#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog id
 * @d: pointer
 * Return: null
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
	printf("name: (nil)\n");
	}
	else
	{
	printf("name: %s\n", d->name);
	}
	printf("age: %f\n", d->age);
	if (d->owner == NULL)
	{
	printf("owner: (nil)\n");
	}
	else
	{
	printf("owner: %s\n", d->owner);
	}
}
