#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
/* ex 3 mods */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* ex 1 */
void print_dog(struct dog *d);
/* ex 2 */
dog_t *new_dog(char *name, float age, char *owner);
/* ex 4 */
void free_dog(dog_t *d);
/* ex 5 */
#endif /* DOG */
