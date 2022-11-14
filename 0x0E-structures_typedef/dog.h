#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *dog_t - new type for type struct dog
 *
 *Definition: type
 */
typedef struct dog dog_t;

/**
 *struct dog - definition of dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *
 *Description: dog properties
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
