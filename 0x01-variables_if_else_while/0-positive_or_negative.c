#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Descriptin check random number positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}