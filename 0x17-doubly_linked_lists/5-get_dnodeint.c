#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at index
 * @head: first node
 * @index: number of the node
 * Return: the address of the node that at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
		{
			return (head);
		}
		head = head->next;
		x++;
	}
	return (NULL);
}
