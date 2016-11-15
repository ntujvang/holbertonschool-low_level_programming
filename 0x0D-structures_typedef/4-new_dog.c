#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;

	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
		return (NULL);
	tmp->name = name;
	tmp->age = age;
	tmp->owner = owner;
	return (tmp);
}
