#include "main.h"
#include <string.h>

/**
 * _puts2 - fns to print a given string
 * @str: parameter as be passed on the fns
 * Return: string
 */
void _puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
