#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of size and assigns char c
 * @size - size of array
 * @c - char to assign
 * Description
 * Return pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);
}
