#include <stdio.h>
#include <unistd.h>
/**
 * main - prints error to Stderr
 * Description: prints a quote followed by a newline
 * Stderr
 * Return: 1 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
