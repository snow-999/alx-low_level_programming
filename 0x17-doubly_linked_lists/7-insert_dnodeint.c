#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at andix
 * @h: head node
 * @idx: index that will be add the node in
 * @n: node data
 * Return: the addres of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;

	node = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		node = node->next;
		if (node == NULL)
		{
			return (NULL);
		}
	}
	if (node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = node;
	new->next = node->next;
	node->next->prev = new;
	node->next = new;
	return (new);
}
