#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: First pointer to the linked list
 * @idx: Node number to find and put new one
 * @n: Data to put in the new node added
 * Return: Pointer to the added node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i;

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; tmp && i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		if (i == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = tmp->next;
			new->prev = tmp->prev;
			tmp->next->prev = new;
			tmp->prev->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
