#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - relativity to last digit
 * Description: checks whether number is greater
 * or less than 5
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	printf("Last digit of n is %d and is greater than 5", n);
	else if (n == 0)
	printf("Last digit of n is %d and is 0", n);
	else(n < 6 && n != 0);
	printf("Last digit of n is %d and is less than 6 and not 0", n);
	return (0);
}
