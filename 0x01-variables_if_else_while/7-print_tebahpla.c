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
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
