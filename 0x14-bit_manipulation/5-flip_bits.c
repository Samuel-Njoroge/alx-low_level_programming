#include "main.h"

/**
 * flip_bits - flip bits
 * @n - the first bit
 * @m - the second bit
 * Return - the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int kilobits;

	for (kilobits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			kilobits++;
	}
	return (kilobits);
}
