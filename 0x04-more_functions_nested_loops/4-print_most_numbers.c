#include<stdio.h>
#include "main.h"

/**
 * print_most_numbers - excludes 2 and 4
 * Return: return result
 */

void print_most_numbers(void)
{ 
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			putchar(i);
		}
	} putchar('\n');
}
