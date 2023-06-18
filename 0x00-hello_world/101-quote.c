#include <unistd.h>
#include <string.h>

/**
 * program main that prints
 *
 * Return Always (1)
 */
int main(void)
{
	write( 1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
}
