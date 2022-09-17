#include "main.h"

/**
 * _isdigit - Entry point
 * Desc: to check number 0 - 9
 * @c: the character to test
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
