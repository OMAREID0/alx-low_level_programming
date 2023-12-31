#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node t the start of list
 * @head: pointer of pointer pointing to node
 * @str: string to add to the node
 *
 * Return: return pointer to the node
 */
list_t *add_node(list_t **head, const char *str)
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
	temp->next = (*head);
	(*head) = temp;

	return ((*head));
}
