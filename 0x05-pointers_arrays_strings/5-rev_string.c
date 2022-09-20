#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: parameter
 *
 */
void rev_string(char *s)
{
	int i; 
	int n;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
