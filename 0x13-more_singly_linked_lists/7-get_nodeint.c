#include "lists.h"
/**
 * get_nodeint_at_index - get a node
 * @head: pointer
 * @index: index of node
 * Return: head
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
	head = head->next;
	}
	return (head);
}
