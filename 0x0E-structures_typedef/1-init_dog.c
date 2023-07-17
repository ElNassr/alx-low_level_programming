#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialise a dog
 * @d: dog's structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: no return for this function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d.age = age;
	d->owner = *owner;
}
