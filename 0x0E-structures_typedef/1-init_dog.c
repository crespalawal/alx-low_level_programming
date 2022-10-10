#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - structure type
 * @name: char member1
 * @age: 2nd member
 * @owner: 3rd member
 * @d: pointer to structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	return;
	d->.name = name;
	d->.age = age;
	d->.owner = owner;
}

