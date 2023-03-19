#include "main.h"

/**
 * _isdigit - Entry point
 * Description: Checks for a digit
 * @c: Carrier integer variable
 * Return: 1 on success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
