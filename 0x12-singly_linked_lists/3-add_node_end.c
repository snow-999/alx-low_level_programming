#include "lists.h"
/**
 * add_node_end - add node
 * @head: pointer
 * @str: string
 * Return: head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head, *new_node;
	size_t i = 0;

	if (str == NULL)
	{
	i = 0;
	}
	while (str[i] != '\0')
	{
	i++;
	}
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
	{
	return (NULL);
	}
	new_head->str = strdup(str);
	new_head->len = i;
	new_head->next = NULL;
	new_node = *head;
	if (new_node == NULL)
	{
	*head = new_head;
	}
	else
	{
	while (new_node->next != NULL)
	{
	new_node = new_node->next;
	}
	new_node->next = new_head;
	}
	return (*head);
}
