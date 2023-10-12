#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the dog structure
 * @name: the dog name
 * @age: dog age
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
