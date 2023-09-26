#include "lists.h"
/**
 * free_listint - empty the list
 * @head: pointer
*/
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
	new = head;
	head = head->next;
	free(new);
	}
}
