#include <stdio.h>
#include "lists.h"

/**
 * list_len -function that returns the number of elements in a list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: The number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h != NULL)
	{
		d++;
		h = h->next;
	}

	return (d);
}
