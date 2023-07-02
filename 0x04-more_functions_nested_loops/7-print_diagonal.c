#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: length of the diagonal line
 *
 * Description: This function prints a diagonal line of backslashes (\) of
 * length n. If n is less than or equal to 0, it simply prints a newline.
*/

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
