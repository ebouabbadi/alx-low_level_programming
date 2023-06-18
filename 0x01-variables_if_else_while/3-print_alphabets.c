#include <unistd.h>

/**
 * main - A  program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n", 53);
	return (0);
}
