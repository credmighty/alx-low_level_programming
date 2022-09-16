#include "main.h"

/**
 * _isupper - Entry point
 * Desc: fns to test uppercase
 * Return: always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
