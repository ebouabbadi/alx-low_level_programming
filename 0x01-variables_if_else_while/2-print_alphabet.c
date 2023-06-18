#include <unistd.h>

/**
 * main A program
 *
 * description: Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Sucsess)
 */
int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	return (0);
}
