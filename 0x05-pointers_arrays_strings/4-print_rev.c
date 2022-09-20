#include "main.h"
#include <string.h>
/**
 * print_rev - shows str in reve
 * @s: parameter
 *
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
