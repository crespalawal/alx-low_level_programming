#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * create_array - creates an array of characters
 * @size: size of array input
 * @c: specific character
 * Return: NULL if size zero
 * pointer to array otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	for (index = 0; index < size; index++)
		c = array[index];
	return (array);
}
