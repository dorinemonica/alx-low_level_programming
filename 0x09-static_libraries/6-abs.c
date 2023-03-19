#include "main.h"

/**
 *_abs- Entry point
 *Description: computes absolute values of integers
 *@n: function argument
 *Return: Absolute value of integers.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
