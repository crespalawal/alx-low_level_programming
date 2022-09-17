#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if character is digit or not
 * @c: character tested
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if ((c <= 0) && (c <= 9))
	{
		return (1);
	}
	return (0);
}
