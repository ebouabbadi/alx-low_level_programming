#include <stdio.h>

/**
 * main - A program prints all possible
 * different combinations of two digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			putchar(i + 48);
			putchar(k + 48);

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
