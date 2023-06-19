#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription :  different combinations of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
			
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');
					putchar(',');
					putchar(' ');
			
			}
		}
	}

	putchar('\n');

	return (0);
}
