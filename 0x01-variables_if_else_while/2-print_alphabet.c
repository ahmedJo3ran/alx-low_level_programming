#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : print lowercase with putch function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	return (0);
}
