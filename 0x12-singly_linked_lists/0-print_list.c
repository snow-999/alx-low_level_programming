#include "lists.h"
/***/
int length(char *ptr)
{
	int i = 0;

	if (!ptr)
	{
	return (0);
	}
	while (*ptr++)
	{
	i++;
	}
	return (i);
}
size_t print_list(const list_t *h)
{
	int c;

	if (h->str == NULL)
	{
	printf("[%d] (nil)", length(h->str));
	}
	while (h != NULL)
	{
	printf("[%d] %s\n", length(h->str), h->str);
	c++;
	h = h->next;
	}
	return (c);
}
