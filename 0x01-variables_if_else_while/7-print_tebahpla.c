#include <stdio.h>

/**
 * main - A program prints the alphabet in lowercase in reverse using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');

	return (0);
}
