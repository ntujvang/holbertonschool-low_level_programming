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
	dog_t *my_dog;
	int i;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	if (i == 0 || name == NULL)
		return (NULL);
	my_dog->name = malloc(i);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		my_dog->name[i] = name[i];
	my_dog->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		;
	if (i == 0 || owner == NULL)
		return (NULL);
	my_dog->owner = malloc(i);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		my_dog->owner[i] = owner[i];
	return (my_dog);
}
