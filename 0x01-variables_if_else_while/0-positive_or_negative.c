#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Determines if a number is positve, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void);
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("xd is positive\n", n);
	}
	else if (n == 0);
	{
		printf("xd is zero\n", n);
	}
	else
	{
		printf("xd is negative\n", n);
	}
	Return(0);
}
