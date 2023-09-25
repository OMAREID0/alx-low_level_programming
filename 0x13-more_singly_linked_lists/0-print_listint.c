#include "lists.h"

/**
 * print_listint - print elements of list
 * @h: pointer to the first node
 *
 * Return: return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}