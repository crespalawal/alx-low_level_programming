#include<stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = '0'; 1 <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
