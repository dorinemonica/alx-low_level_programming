#include "main.h"

/**
 * _strcat - Entry point
 * Description: Concatenates two strings
 * @dest: destination string to be concatenated
 * @src: string to be appended
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
