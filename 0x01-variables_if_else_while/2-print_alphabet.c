#include <stdio.h>

/**
 * main - main function
 *
 * putchar display the alphabets
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
