#include<stdio.h>

/**
 * main - Entrt point
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = '0'; 1 <= '9'; i++)
	{
		putchar(i);
		for (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
