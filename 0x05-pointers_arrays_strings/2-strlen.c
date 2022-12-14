#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 *
 * Return: returns str length
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
