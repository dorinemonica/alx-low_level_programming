#include "main.h"

/**
 * _isalpha - Entry point
 * Description: Checks if character is an alphabet
 * @c : The integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
