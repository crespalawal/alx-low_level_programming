#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for upper case or not
 * @c: character to be tested
 * Return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
