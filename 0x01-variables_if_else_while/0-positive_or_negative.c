#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - display as on number line
 * Description: outputs positive, zero or negative
 * depending on the relation to zero
 *
 * Return: always 0 for success
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
