#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 * @name: attribute pointer to char name's dog
 * @age: attribute float age's dog
 * @owner: attribute pointer to char owner's dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - defines a new name for type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
