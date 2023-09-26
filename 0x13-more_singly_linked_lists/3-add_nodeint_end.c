#include "lists.h"
/**
 * add_nodeint_end - add node at the end
 * @head: pointer
 * @n: int
 * Return: new_node
 *
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *new;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	new = *head;
	while (new->next)
	{
	new = new->next;
	}
	new->next = new_node;
	}
	return (new_node);
}
