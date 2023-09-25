#include "lists.h"

/*
 * listint_len - count number of elements in list
 * @h: pointer pointing to the first node
 *
 * Return: return number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
