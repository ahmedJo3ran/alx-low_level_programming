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
	char lower = 'a';
	char Uper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (Uper <= 'Z')
	{
		putchar(Uper);
		Uper++;
	}
	putchar('\n');

	return (0);
}
