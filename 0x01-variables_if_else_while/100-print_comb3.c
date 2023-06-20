#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription : print tow digit but not simaler
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 8)
	{
		putchar(i + '0');
		putchar(j + '0');

		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}

		j++
			;
		if (j > 9)
		{
			i++;
			j = i + 1;
		}
	}
	putchar('\n');
	return (0);
}
