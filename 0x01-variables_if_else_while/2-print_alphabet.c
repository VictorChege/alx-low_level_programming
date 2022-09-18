#include <stdio.h>

/**
 * main - printing alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
