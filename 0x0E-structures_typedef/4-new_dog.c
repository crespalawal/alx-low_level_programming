#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenC, lenD;

	struct dog *n_dog = NULL;

	lenC = 0;
	while (name[lenC] != '\0')
		lenC++;
	lenD = 0;
	while (owner[lenD] != '\0')
		lenD++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(lenC + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < lenC; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i < lenD; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}

