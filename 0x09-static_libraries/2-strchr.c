#include "main.h"

/**
 * _strchr - Entry point
 * Description: Locates character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to be searched
 *
 * Return: A pointer to the first occurrence of c in s
 * Or NULL if no match is found
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
