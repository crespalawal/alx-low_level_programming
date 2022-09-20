#include "main.h"

/**
 * _puts - function that prints
 * @str: parameter to puts
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
