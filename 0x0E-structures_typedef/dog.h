#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is the dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
