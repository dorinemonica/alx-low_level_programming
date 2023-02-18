#include <stdio.h>

/**
 * main - main function entry
 *
 * putchar displays the output
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char m;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
