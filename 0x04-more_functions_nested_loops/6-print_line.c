#include "main.h"

/**
 * print_line - printing straight lines
 *
 * @n: number of time
 * Return: no return
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('$');
	_putchar('\n');
}
