#include "main.h"


/**
 * times_table - Prints the times table from 0 to 9
*/

void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (z < 10)
					_putchar(' ');
			}

				_putchar(z + '0');
		}
		_putchar('\n');
	}
}
