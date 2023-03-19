#include "main.h"


/**
 * _memset - Entry point
 * @s: pointer to fill with constant value.
 * @b: The constant value to fill
 * @n: Maximum bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
