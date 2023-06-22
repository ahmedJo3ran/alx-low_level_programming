#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *                      separated by new lines
*/

void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

		}
		n++;

		_putchar('\n');
	}
}
