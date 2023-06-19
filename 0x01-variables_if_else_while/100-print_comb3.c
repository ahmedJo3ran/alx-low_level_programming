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
	int digit1 = 0;
	int digit2 = 0;

	while (digit1 <= 9)
	{
		digit2 = 0;

		while (digit2 <= 9)
		{
			if (digit1 != digit2 && !(digit1 == 1 && digit2 == 0))
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(',');
				putchar(' ');
			}

			digit2++;
		}

		digit1++;
	}
	return (0);
}
