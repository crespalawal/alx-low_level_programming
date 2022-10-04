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
	unsigned int i;
	char *arr;
	
	i = 0;
	arr = (char *)malloc(sizeof(char) * size);
	c = arr[i];

	for (i = 0; i < size; ++i)
	{
		_putchar(i);
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (arr);
}
