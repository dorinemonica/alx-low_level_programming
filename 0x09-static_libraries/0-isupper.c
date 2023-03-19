#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks for uppercase characters
 * @c: carrier integer variable
 * Return: 1 on success, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
