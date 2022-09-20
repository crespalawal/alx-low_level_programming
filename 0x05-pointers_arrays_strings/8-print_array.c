#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array
 * @a: pointer to array
 * @n: number of elements
 *
 */
void print_array(int *a, int n)
{
	int a;
	int array[n];

	for (a = 0 ; a <= n; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

