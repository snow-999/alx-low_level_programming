#include "lists.h"
/**
 * add_dnodeint - add node at the begginig
 * @head: the first node
 * @n: data of the node
 * Return: the addres of node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
