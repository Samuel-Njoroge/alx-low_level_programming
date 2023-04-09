#include "main.h"

/**
 *set_bit - sets a value of a bit to 1 at a given index
 *@index: index to be set
 *@n: pointer to number the  bit is set
 *Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n | j);

	return (1);
}
