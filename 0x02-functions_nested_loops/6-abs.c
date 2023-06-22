#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: The integer value
 *
 * Return: The absolute value of the integer.
*/

int _abs(int c)
{
	if (c < 0)
	{
		int abc_vul;

		abc_vul = c * -1;
		return (abc_vul);
	}

	return (c);
}
