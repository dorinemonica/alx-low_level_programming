#include "main.h"

/**
 * _memcpy - Entry point
 * Description: copy memory area
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: Number of bytes to be copied
 *
 *Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
