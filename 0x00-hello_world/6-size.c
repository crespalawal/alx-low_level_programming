#include<stdio.h>
/**
 * main - prints size of variables
 * Return: 0 if successful
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long d;
	float e;

	printf("Size of char : %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of int : %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int : %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long : %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float : %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
