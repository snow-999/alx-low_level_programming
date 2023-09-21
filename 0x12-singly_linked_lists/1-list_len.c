#include "lists.h"
/**
 * list_len - get length
 * @h: liist
 * Return: i
 *
*/
size_t list_len(const list_t *h)
{
	const list_t *new = h;
	size_t i = 0;

	while (new != NULL)
	{
	i++;
	new = new->next;
	}
	return (i);
}
