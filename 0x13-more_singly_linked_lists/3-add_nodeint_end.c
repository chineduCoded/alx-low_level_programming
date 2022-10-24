#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the end of a linked list
 * @head: pointer to the first node
 * @n: the data value of the node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (end->next)
		end = end->next;

	end->next = new;
	return (*head);
}
