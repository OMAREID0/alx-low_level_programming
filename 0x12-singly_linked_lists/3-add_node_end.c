#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node in the end of list
 * @head: pointer to pointer pointing to node
 * @str: string to add in the node
 *
 * Return: return pointer to the node
 */
list_t *add_node_end(list_t **head, const char *str);
{
	unsigned int len = 0;
	list_t *node;
	list_t *temp = *head

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	while (str[len])
	{
		len++;
	}

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*temp == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (node);
}

