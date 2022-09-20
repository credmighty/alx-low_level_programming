#include "main.h"
#include <string.h>

/**
 * print_rev - fns to print a given string in reverse
 * @s: parameter as be passed on the fns
 * Return: reversed string
 */
void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
