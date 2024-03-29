#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concetenates two strings
 * @s1: string to append to
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concetenate to s1
 *
 * Return: a pointer to  resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
}
