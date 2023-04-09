#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned integer.
 * @b - points a string of chars(0 and 1)
 * Return - the converted number a 0 or 1
 *
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int x;
	int base2, size;

	if (!b)
		return (0);
	x = 0;

	for (size = 0; b[size] != '\0'; size++)
		;

	for (size--, base2 = 1; size >= 0; size--, base2 *= 2)
	{
		if (b[size] != '0' && b[size] != '1')
		{
			return (0);
		}

		if (b[size] & 1)
		{
		x += base2;
		}
	}
return (x);
}

