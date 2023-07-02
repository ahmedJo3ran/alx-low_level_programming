#include "main.h"

/**
 * print_square - Prints a square of '#' characters of given size.
 * @size: The size of the square.
 *
 * Description: If the size is 0 or negative, it prints a new line.
 *              Otherwise, it prints a square of '#' characters with
 *              the given size.
*/

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
