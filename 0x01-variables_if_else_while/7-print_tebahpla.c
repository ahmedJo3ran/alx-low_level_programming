#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription : what number is greater or less
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

