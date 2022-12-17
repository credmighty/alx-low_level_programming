#include "main.h"

/**
 * _isupper - checks for uppercase character
 * * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'Z' && c <= 'Z')
		return (1);
	else
		return (0);
}
