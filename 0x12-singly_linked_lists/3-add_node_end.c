#include <stdlib.h>
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
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	while (str[len])
	{
		len++;
	}

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;
	(*head) = temp;

	return ((*head));
}

