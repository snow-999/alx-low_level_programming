#include "lists.h"
/**
 * add_node - add node
 * @head: pointer
 * @str: string
 * Return: *head
 *
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	size_t i = 0;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
	{
	return (NULL);
	}
	if (str == NULL)
	{
	i = 0;
	}
	while (str[i] != '\0')
	{
	i++;
	}
	if (*head == NULL)
	{
	new_head->next = NULL;
	}
	else
	{
	new_head->next = *head;
	}
	new_head->str = strdup(str);
	new_head->len = i;
	*head = new_head;
	return (*head);

}
