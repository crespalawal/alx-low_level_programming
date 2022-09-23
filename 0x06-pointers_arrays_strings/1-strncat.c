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
	int j, cp;

	for (j = 0; dest[j] != '\0'; j++)
	{

	}
	for (cp = 0; cp < n; cp++)
	{
		dest[j + cp] = src[cp];
		if (src[cp] == '\0')
			cp = n;
	}

	return (dest);
}
