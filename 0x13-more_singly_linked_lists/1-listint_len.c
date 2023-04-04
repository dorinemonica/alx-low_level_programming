#include <stddef.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
	h = h->next;
		c++;
	}
	return (c);
}
