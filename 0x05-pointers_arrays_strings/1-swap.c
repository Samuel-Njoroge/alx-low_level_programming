#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @x: first integer.
 * @y: second integer.
 * Return: no return.
 */
void swap_int(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
