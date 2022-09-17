#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws diagonal
 * @n: input integer
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			} putchar('\\');
			if (i == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	} else
		putchar('\n');
}
