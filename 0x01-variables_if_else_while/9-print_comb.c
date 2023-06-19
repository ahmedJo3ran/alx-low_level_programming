#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription : cheak unmber if not 9 put "," after number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit;

	while (digit < 10)
	{
		putchar(digit + 0);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}

	putchar('\n');

	return (0);
}
