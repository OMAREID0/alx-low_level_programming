#include <stdlib.h>
#include "lists.h"

/**
 * list_len - count number of nodes in the list
 * @h: pointer point to the first node
 *
 * Return: return number of the nodes
 */
size_t list_len(const list_t *h)
{
	int i;
	size_t count = 0;

	for (i = 0; h != NULL; i++)
	{
		count++;
		h = h->next;
	}
	return (count);
}
