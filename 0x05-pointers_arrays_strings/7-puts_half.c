#include "main.h"
#include <string.h>

/**
 * puts_half- prints half of string
 * @str: parameter
 *
 */
void puts_half(char *str)
{
	int n;
	int i;
	int j;
	int len;

	len = strlen(*str);
	n = ((len - 1) / 2);
	i = len / 2;
	j = len - i;

	while (len > 0)
	{
		if (len % 2 == 0)
		{
			_putchar(j);
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
