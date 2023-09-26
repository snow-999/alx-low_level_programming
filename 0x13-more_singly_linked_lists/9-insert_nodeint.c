#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node
 * @head:: pointer
 * @idx: index of list
 * @n: int
 * Return: NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int inx;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!idx)
	{
	new->next = *head;
	*head = new;
	return (new);
	}
	temp = *head;
	while (temp)
	{
		if (inx == idx - 1)
		{
		new->next = temp->next;
		temp->next = new;
		return (new);
		}
		inx++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
