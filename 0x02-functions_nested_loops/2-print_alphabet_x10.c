#include "main.h"

/**
 * print_alphabet_x10 - prints abc x 10
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i, c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
