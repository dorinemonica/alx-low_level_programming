#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function of an integer square root
 * @n: integer input
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function that give recursive square root
 * @n: integer input
 * @y: int to be multiplied
 *
 * Return: square root of the int
 */

int _sqrt(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}

	if (y == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, y + 1));
}
