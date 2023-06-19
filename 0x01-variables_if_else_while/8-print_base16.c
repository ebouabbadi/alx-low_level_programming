#include <stdio.h>

/**
 * main - A program that  prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
		putchar((n % 16 < 10) ? (n % 16 + '0') : (n % 16 - 10 + 'a'));
	putchar('\n');

	return (0);
}
