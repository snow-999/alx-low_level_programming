#include "lists.h"
/**
 * pop_listint - pop list
 * @head: pointer
 * Return: n
*/
int pop_listint(listint_t **head)
{
	listint_t *new, *temp;
	int x;

	if (*head == NULL)
	{
	return (0);
	}
	temp = *head;
	new = temp->next;
	x = temp->n;
	free(temp);
	*head = new;
	return (x);
}
