#include "main.h"
#include <string.h>

/**
 * puts2 - puts function
 * @str: parameter
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

