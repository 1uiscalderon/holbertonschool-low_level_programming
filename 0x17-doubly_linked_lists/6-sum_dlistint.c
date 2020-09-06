#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of the linked list.
 * @head: First pointer to the linked list
 * Return: Sum of data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
