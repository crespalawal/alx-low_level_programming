#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 *
 * Return: returns str length
 */
int _strlen(char *s);
{
	int len;

	while (*s != '\0')
	{
		len += 1;
		*s = s + 1;
	}
	return (len);
}
