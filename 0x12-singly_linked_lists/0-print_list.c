#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: A pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		c++;
		h = h->next;
	}

	return (c);
}
