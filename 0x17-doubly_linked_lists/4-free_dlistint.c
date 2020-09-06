#include "lists.h"
/**
 * free_listint - Frees the list.
 * @head: First pointer to the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
