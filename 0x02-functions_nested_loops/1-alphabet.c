#include "main.h"

/**
 * print_alphabet - function that displays the alphabet
 *
 * Return: (0) success
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);
	_putchar('\n');
}
