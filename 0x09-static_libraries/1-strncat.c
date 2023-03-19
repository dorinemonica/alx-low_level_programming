#include "main.h"

/**
 * _strncat - Entry point
 * Description: Concatenates two strings, taking at most n bytes from src
 *
 * @dest: Destination string
 * @src: Source string
 * @n: The maximum number of bytes to use from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len++] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
