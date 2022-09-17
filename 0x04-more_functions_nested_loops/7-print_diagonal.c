#include "main.h"

/**
 * print_diagonal - printing straight lines
 *
 * @n: number of times
 * Return: no return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - 1; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
