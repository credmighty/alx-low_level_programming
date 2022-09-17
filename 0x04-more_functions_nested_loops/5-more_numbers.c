#include "main.h"

/**
 * more_numbers - number printing
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i, j, a, b;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				a = j / 10;
				b = j % 10;
				_putchar(a + '0');
			}
			else
				b = j;
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
