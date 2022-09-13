#include "main.h"
/**
 * print_alphabet - Entry point
 * Desc: a fns to print alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
