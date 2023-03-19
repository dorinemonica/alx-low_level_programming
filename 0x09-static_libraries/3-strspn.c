#include "main.h"

/**
 * _strspn - Entry point
 * Description: Gets the length of a prefix substring
 * @s: String to be searched
 * @accept: Prrefix to be measured
 *
 * Return: Length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0 ; s[i] != 0; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
