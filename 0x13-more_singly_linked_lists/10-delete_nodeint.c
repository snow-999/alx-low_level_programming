#include "lists.h"
/**
 * delete_nodeint_at_index - delet a node
 * @index: index of list
 * @head: pointer
 * Return: 1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *old;
	unsigned int x = 0;

	if (head == NULL || *head == NULL)
	{
	return (-1);
	}
	if (!index)
	{
	new = *head;
	*head = (*head)->next;
	free(new);
	return (1);
	}
	new = *head;
	while (new)
	{
		if (x == index)
		{
		old->next = new->next;
		free(new);
		return (1);
		}
		x++;
		old = new;
		new = new->next;
	}
	return (-1);
}
