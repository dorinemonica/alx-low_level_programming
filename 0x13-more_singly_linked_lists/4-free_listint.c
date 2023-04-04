#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -function that frees a listint_t list
 *
 * @head: pointer to the head of the lis
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head;
		head = head->next;
		free(next_node);
	}
}
