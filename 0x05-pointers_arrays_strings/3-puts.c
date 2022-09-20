#include "main.h"
#include <string.h>

/**
 * _puts - fns to print a given string
 * @s: parameter as be passed on the fns
 * Return: string
 */
void _puts(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i <= len - 1; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
