#include "main.h"

/**
 * _strncat - it concatenates two strings.
 * @dest: Destination string being appended to.
 * @src: source string added to.
 * @n: number of bytes from src to concatenate
 *
 * Return: The pointer to resulting destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
