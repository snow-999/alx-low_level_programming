#include "lists.h"
/**
 * sum_dlistint - sum the lists data
 * @head: first node
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
