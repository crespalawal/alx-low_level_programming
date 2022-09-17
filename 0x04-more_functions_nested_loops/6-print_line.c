#include<stdio.h>
#include "main.h"

/**
 * print_line - prints straight line
 * @n: input integer
 * Return: returns nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			putchar('\n');
		} putchar('_');
	} putchar('\n');
}
