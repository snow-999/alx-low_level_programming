#include "lists.h"
/**
 * add_dnodeint_end - add node at thr end
 * @head: first node
 * @n: node data
 * Return: the addres of the last node
 *
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = malloc(sizeof(dlistint_t));
	dlistint_t *node;

	if (!head || !end)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	if (!*head)
	{
		end->prev = NULL;
		*head = end;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = end;
		end->prev = node;

	}
	return (end);
}
