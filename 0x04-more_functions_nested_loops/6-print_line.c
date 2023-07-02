#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: number of underscores to print
 *
 * Description: This function prints a line consisting of a specified
 * number of underscores. If the input number is less than or equal to 0,
 * it simply prints a newline character.
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
