#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: memory area pointer
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
