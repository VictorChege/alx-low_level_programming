#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main
 *
 * variable n
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
	printf("is positive");
	else if (n == 0);
	}
	{
	printf("is zero");
	else if (n < 0)
	}
	{
	printf("is negative");
	}

	printf("n is: %d\n", n);

	return  (0);
}