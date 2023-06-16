#include <stdio.h>

/**
 * main program that prints the size of various types
 * on the computer it is co0mpiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (char)sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (long long int)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (float)sizeof(f));
	return (0);
}
