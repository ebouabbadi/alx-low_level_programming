#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int v;
	char *c;

	v = 1;
	c = (char *) &v;

	return ((int)*c);
}
