#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the linked list
 * @n: Number in the new node
 * Return: Node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n, *tail;
	int i;

	tail = *head;
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (0);

	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	for (i = 0; tail->next != NULL; i++)
		tail = tail->next;
	tail->next = new_n;
	new_n->prev = tail;
	return (new_n);
}
