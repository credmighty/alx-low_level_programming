#include "main.h"

/**
 * more_numbers - number printing
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
}
