#include "lists.h"
/**
 * dlistint_len - get the length of node
 * @h: head node
 * Return: number of elements
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
