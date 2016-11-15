#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the dogs!
 * @d: dog freeing
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
