#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a par on each element of array
 * @size: size of the array
 * @array: the array
 * @action: pointer to print
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

