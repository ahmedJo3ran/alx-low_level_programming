#include "main.h"


/**
 * jack_bauer - Prints the time in a 24-hour format
 *
 * Description: This function prints all possible combinations of the time
 *              in a 24-hour format, from 00:00 to 23:59.
 *              The time is printed using the _putchar function.
*/

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
