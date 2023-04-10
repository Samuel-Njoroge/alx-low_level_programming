#include "main.h"

/**
 * int clear_bit - sets the value of a bit to 0 at a given index.
 * @n - points to unsigned int
 * @index - the index of the bit
 * Return - if successfull returns 1 and  -1  if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = << index;

	if (*n & x)
		*n ^= x;

	return (1);
}

