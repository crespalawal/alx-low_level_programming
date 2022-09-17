#include "main.h"
#include <stdio.h>

/**
 * print_numbers - functions that print all numbers fro * m 0 to 9
 * Return: returns 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
