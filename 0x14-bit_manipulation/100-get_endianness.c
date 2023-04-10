#include "main.h"

/**
 *get_endianness - checks the endiaanness of a value
 *Return - 1 for a little endian, 0 for a big endian
 */

int get_endianness(void)
{
	unsigned int a;
	char *x;

	a = 1;
	x = (char *) &a;

	return ((int)*x);
}
