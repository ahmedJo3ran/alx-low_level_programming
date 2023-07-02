#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle made of '#' characters.
 * @size: The size of the triangle to be printed.
 *
 * This function takes an integer 'size' as input and prints a right-angled
 * triangle made of '#' characters. The triangle will have 'size' rows and
 * 'size' columns. If 'size' is less than or equal to 0, the function will
 * simply print a newline character ('\n').
*/

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
