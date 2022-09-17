#include "main.h"

/**
 * print_most_numbers - number printing
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - 1; j++)
			_putchar('_');
		_putchar('\n');
	}
}
