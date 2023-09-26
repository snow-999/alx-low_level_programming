#include "lists.h"
/**
 * print_listint - print node list
 * @h: pointer
 * Return: x
 *
*/
size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h)
	{
	printf("%d\n", h->n);
	x++;
	h = h->next;
	}
	return (x);
}
