#include <unistd.h>

/**
 * main - A program
 *
 * Return: Always 0 (Sucsess)
 */
int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	return (0);
}
