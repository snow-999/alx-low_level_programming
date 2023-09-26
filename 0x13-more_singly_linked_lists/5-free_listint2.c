#include "lists.h"
/**
 * free_listint2 - empty the list
 * @head: pointer
 *
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *node1;

	if (head != NULL)
	{
	node = *head;
	while (node)
	{
	node1 = node;
	node = node->next;
	free(node1);
	}
	*head = NULL;
	}
}
