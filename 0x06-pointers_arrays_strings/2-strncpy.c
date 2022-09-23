#include "main.h"

/**
 * _strncat - appends src to dest at n bytes
 * @src: source
 * @dest: destination
 * @n: integer parameter
 * Return: returns concatenated str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
