#include <stdio.h>

/**
 * main - printing alphABETS
 * Return: 0 (success)
 */
int main(void)
{
	char alpha, lower;

	alpha = 'a';
	lower = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (lower <= 'Z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}

