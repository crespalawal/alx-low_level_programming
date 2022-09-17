#include<stdio.h>
#include "main.h"

/**
 * print_most_numbers - excludes 2 and 4
 * Return: return result
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
