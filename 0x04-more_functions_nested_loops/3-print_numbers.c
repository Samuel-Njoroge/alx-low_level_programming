#include <stdio.h>

/**
 * print_numbers - prints between 0 and 9
 * Return: no return
 */
void print_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
	_putchar(ch + '0');
	}
	_putchar('\n');
}
