#include <stdio.h>

/**
 *main - Entry point
 *Return: 0 (success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 9;)
	{
		putchar(num + '0');
		num++;
	}
	for (letter = 'a'; letter <= 'f';)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}



