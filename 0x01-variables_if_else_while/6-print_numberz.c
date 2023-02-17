#include <stdio.h>

/**
 * main - main function entry
 *
 * putchar displays the number output
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
