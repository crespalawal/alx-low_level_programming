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
	int j = 0;

	for (j = 0; j < n && src[i] != '\0'; j++)
		dest[i] = src[j];
	for (; j  < n; j++)
		dest[j] = '\0';

	return (dest);
}
