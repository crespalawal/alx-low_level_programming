#include "main.h"

/**
 * print_alphabet - to print a-z
 * Return: always 0 success
 */

int print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar("\n");
