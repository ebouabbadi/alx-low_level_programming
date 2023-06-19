#include <stdio.h>

/**
 * main - A program prints the alphabet in lowercase,
 * except q and e. followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}

