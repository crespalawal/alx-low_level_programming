#include <stdio.h>
#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: integer size
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for ((j = size - i); j > 0; j--)
		{
			putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			putchar('#');
		}
		if (i == size)
		{
			continue;
		}
		putchar('\n');
	}
}
