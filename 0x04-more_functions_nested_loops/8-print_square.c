#include <stdio.h>
#include "main.h"

/**
 * print_square - draws square with #
 * @n: (size) integer
 * Return: nothing
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < (n - 1); j++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
