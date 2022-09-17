#include <stdio.h>
#include "main.h"

/**
 * print_number - prints number
 * @n: number to print
 * Return: number
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		putchar(num / 10);
	}
	putchar(num % 10 + '0');
}
