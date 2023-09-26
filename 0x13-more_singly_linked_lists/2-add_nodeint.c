#include "lists.h"
/**
 * add_nodeint - add node at the begining
 * @head: poniter
 * @n: int
 * Return: new_nood
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nood;

	new_nood = malloc(sizeof(listint_t));
	if (head == NULL || new_nood == NULL)
	{
	return (NULL);
	}
	new_nood->next = NULL;
	new_nood->n = n;
	if (*head)
	{
	new_nood->next = *head;
	}
	*head = new_nood;
	return (new_nood);
}
