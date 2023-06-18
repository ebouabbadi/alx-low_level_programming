#include <unistd.h>
#include <string.h>

/**
 * main - A program that prints a string use function write.
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
