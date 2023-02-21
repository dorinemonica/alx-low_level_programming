#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int n;
	char m;

	for (n = 1; n <= 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}
