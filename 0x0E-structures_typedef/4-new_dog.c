#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * size - find string size
 * @c: string
 * Return: s
*/
int _size(char *c)
{
	int s = 0;
	
	for (; c[s] != '\0'; s++)
	{
	;
	}
	return (s);
}
/**
 * strcpy - copy string value
 * @first: first string
 * @second: second string
 * Return: first
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creat a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
	return (NULL);
	}
	dog =(dog_t *)  malloc(sizeof(dog_t));
	if (dog == NULL)
	{
	return (NULL);
	}
	dog->name = malloc(sizeof(char) * _size(name) + 1);
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _size(owner) + 1);
	if (dog->owner == NULL)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);

}
