#include "main.h"
#include <string.h>

/**
 * rev_string - fns to print a given string in reverse
 * @s: parameter as be passed on the fns
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i, len, j;
	char v1, v2;

	for (len = 1; s[len] != '\0'; len++)
	{
	}
	j = len - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
