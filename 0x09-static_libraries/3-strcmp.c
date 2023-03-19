#include "main.h"

/**
 * _strcmp - Entry point
 * Description: Compares two strings
 * @s1: String one
 * @s2: String two
 * Return: Positive integer if s1 > s2, 0 if equal
 * and negative if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else
	{
		return (s1[i]);
	}
}
