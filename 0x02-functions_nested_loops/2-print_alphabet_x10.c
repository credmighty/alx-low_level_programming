#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Desc: a fns to print alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int m = 0;

	while (m < 10)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar("\n");
		m++;
	}
}
