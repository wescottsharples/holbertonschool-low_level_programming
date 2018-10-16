#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer to struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
