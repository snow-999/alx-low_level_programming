#include "lists.h"
/***/
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
	}
	return (x);
}
