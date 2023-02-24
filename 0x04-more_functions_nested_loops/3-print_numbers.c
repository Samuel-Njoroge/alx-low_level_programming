#include <stdio.h>

/**
 * print_numbers - prints between 0 and 9
 * Return: no return
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	_putchar(n + '0');
	}
	_putchar('\n');
}
