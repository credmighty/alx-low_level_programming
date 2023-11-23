#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: string to convert.
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int d = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '1')
		{
			d = (d * 2) + 1;
			i++;
		}
		else if (b[i] == '0')
		{
			d = d * 2;
			i++;
		}
		else
			return (0);
	}
	return (d);
}
