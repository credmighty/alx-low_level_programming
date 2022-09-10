#include <stdio.h>
/**
 * main - E
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;
	int d1;
	int d2;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (d2 = n; d2 <= 9; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');

			if (d1 == 9 && d2 == 9)
				continue;
			else if (d1 == 8 && d2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
