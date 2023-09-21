#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
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
