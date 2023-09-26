#include "lists.h"
/**
 * listint_len - get the length
 * @h: pointer
 * Return: x
*/
size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h)
	{
	x++;
	h = h->next;
	}
	return (x);
}
