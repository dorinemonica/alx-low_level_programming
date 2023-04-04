#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - function that add node at beginning of a listint_t list
  *
  * @head: head of double pointer
  * @n: int value to be stored in the new node
  * Return: NULL if it failed or address of the new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
