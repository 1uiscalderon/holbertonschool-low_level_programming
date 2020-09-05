#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the node to print
 * @n: Number to be added to the node
 * Return: Added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
