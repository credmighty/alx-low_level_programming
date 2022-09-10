#include <stdio.h>
/**
 *main - E
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;
	int e;
	int f;

	for (e = 0; e <= 9; e++)
	{
		for (f = n; f <= 9; f++)
		{
			putchar(e + '0');
			putchar(f + '0');

			if (e == 9 && f == 9)
				continue;
			else if (f == 8 && f == 9)
				continue;
				putchar(',');
				putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
