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
void init_dog(struct dog *d, char *name, float age, char *owner);
/* ex 1 */
void print_dog(struct dog *d);
/* ex 2 */
#endif /* DOG */