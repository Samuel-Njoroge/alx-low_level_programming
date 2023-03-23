#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints out a name
 * @name: name to print out
 * @f: pointet to the printing fucntion
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
