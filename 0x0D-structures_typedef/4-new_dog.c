#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	if (name)
	{
		new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
		if (!new_dog->name)
		{
			free(new_dog);
			return (NULL);
		}

		_strcpy(new_dog->name, name);
	}
	else
		new_dog->name = NULL;

	if (owner)
	{
		new_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (!new_dog->owner)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}

		_strcpy(new_dog->owner, owner);
	}
	else
		new_dog->owner = NULL;

	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - returns the length of a string
 * @str: the string to find the length of
 * Return: The string length.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}

/**
 * _strcpy - copies one string into another
 * @dest: the destination to copy into
 * @src: the source to copy from
 * Return: Pointer to copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
